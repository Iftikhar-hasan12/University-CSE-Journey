#!/usr/bin/env python3
import sys

def check_winner(board):
    # Rows
    for row in board:
        if row[0] == row[1] == row[2] != " ":
            return row[0]
    # Columns
    for col in range(3):
        if board[0][col] == board[1][col] == board[2][col] != " ":
            return board[0][col]
    # Diagonals
    if board[0][0] == board[1][1] == board[2][2] != " ":
        return board[0][0]
    if board[0][2] == board[1][1] == board[2][0] != " ":
        return board[0][2]
    return None

def is_tie(board):
    for row in board:
        if " " in row:
            return False
    return True

def minimax(board, player):
    winner = check_winner(board)
    if winner == "X": return 1
    if winner == "O": return -1
    if is_tie(board): return 0

    scores = []
    for i in range(3):
        for j in range(3):
            if board[i][j] == " ":
                board[i][j] = player
                score = minimax(board, "O" if player == "X" else "X")
                scores.append(score)
                board[i][j] = " "
    return max(scores) if player == "X" else min(scores)

if __name__ == "__main__":
    board_state = sys.argv[1]
    if len(board_state) != 9:
        print("⚠️ Invalid board string!")
        sys.exit(1)

    board = [list(board_state[i:i+3]) for i in range(0, 9, 3)]

    # Determine current player dynamically
    x_count = board_state.count("X")
    o_count = board_state.count("O")
    current_player = "X" if x_count == o_count else "O"

    score = minimax(board, current_player)

    if score == 1:
        result = "X is guaranteed to win"
    elif score == -1:
        result = "O is guaranteed to win"
    else:
        result = "Tie is inevitable"

    print(f"Minimax Prediction for Player {current_player} → {result}")
