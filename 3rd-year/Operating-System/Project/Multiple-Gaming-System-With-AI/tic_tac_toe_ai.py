#!/usr/bin/env python3
import sys
import pickle
import warnings

# Silence sklearn warnings so your UI stays clean
warnings.filterwarnings("ignore")

CLASS_NAME_FOR = {
    0: "draw",
    1: "loss",
    2: "win",
}
# NOTE: This mapping matches scikit-learn's LabelEncoder default for labels:
# alphabetically: 'draw' -> 0, 'loss' -> 1, 'win' -> 2
# If your training pipeline used a different mapping, change CLASS_NAME_FOR accordingly.


def board_to_features(board):
    """
    Accept either a flat 9-char string like 'XOX  O   ' or a 2D list.
    Encode X=+1, O=-1, empty/space=0  -> 9 numeric features
    """
    mapping = {"X": 1, "O": -1, " ": 0}
    if isinstance(board, str):
        if len(board) != 9:
            raise ValueError("board string must be length 9")
        return [mapping.get(ch, 0) for ch in board]
    else:
        return [mapping.get(cell, 0) for row in board for cell in row]


def fallback_prediction(board_str, current_player):
    """
    Simple heuristic: center is worth +2, each own mark +1
    Report from current player's perspective.
    """
    b = board_str
    x_score = 0
    o_score = 0

    # center weight
    if b[4] == "X":
        x_score += 2
    elif b[4] == "O":
        o_score += 2

    # marks count
    for ch in b:
        if ch == "X":
            x_score += 1
        elif ch == "O":
            o_score += 1

    total = x_score + o_score
    if total == 0:
        probs = {"win": 0.33, "loss": 0.33, "draw": 0.34}
    else:
        # Normalize crudely to "win-like" vs "loss-like"; draw the rest
        # (just to have something sensible)
        x_like = x_score / total
        o_like = o_score / total
        draw_like = 1.0 - abs(x_like - o_like)

        # normalize to sum 1
        s = x_like + o_like + draw_like
        x_like /= s
        o_like /= s
        draw_like /= s

        # Report from current player's POV
        if current_player == "X":
            probs = {"win": x_like, "loss": o_like, "draw": draw_like}
        else:
            probs = {"win": o_like, "loss": x_like, "draw": draw_like}

    return (
        f"AI Prediction for Player {current_player} -> "
        f"Win: {probs['win']:.0%}, Loss: {probs['loss']:.0%}, Draw: {probs['draw']:.0%}"
    )


def predict_winner(board_str, current_player):
    # Try to load model
    try:
        with open("tic_tac_toe_model.pkl", "rb") as f:
            model = pickle.load(f)
    except Exception:
        return fallback_prediction(board_str, current_player)

    # Build features (9 numbers)
    feats = board_to_features(board_str)

    # Predict probabilities and map them to names using model.classes_
    try:
        proba = model.predict_proba([feats])[0]  # array of shape (n_classes,)
        # model.classes_ are the numeric labels (e.g., [0,1,2]); map to names:
        probs_named = {}
        for cls_idx, p in zip(model.classes_, proba):
            name = CLASS_NAME_FOR.get(int(cls_idx), str(cls_idx))
            probs_named[name] = float(p)

        # Ensure all three keys exist
        win_p = probs_named.get("win", 0.0)
        loss_p = probs_named.get("loss", 0.0)
        draw_p = probs_named.get("draw", 0.0)

        # Convert to current player's perspective:
        if current_player == "X":
            pov_win, pov_loss = win_p, loss_p
        else:  # Player O
            # If 'win' means "X wins" from training, then for O we swap win<->loss
            pov_win, pov_loss = loss_p, win_p

        # Re-normalize just in case
        s = pov_win + pov_loss + draw_p
        if s > 0:
            pov_win /= s
            pov_loss /= s
            draw_p /= s

        return (
            f"AI Prediction for Player {current_player} -> "
            f"Win: {pov_win:.0%}, Loss: {pov_loss:.0%}, Draw: {draw_p:.0%}"
        )
    except Exception:
        return fallback_prediction(board_str, current_player)


if __name__ == "__main__":
    # Args: board_str [current_player]
    if len(sys.argv) < 2 or len(sys.argv) > 3:
        print("Usage: python tic_tac_toe_ai.py <board_state> [current_player]")
        sys.exit(1)

    board_state = sys.argv[1]
    if len(board_state) != 9:
        print(f"Invalid board string length: '{board_state}'")
        sys.exit(1)

    current = sys.argv[2] if len(sys.argv) == 3 else "X"
    if current not in ("X", "O"):
        current = "X"

    print(predict_winner(board_state, current))
