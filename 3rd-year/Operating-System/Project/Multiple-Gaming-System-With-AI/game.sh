#!/bin/bash

# Simple Game Collection with AI Integration

# Function to display the main dashboard
show_dashboard() {
    clear
    echo "================================"
    echo "     WELCOME TO GAME HUB"
    echo "================================"
    echo "1. Tic Tac Toe (with AI Prediction)"
    echo "2. Rock Paper Scissor"
    echo "3. Snake and Ladder"
    echo "4. Quiz Game"
    echo "5. Guess the Number"
    echo "6. Terminate the project"
    echo "================================"
}

# 1. Tic Tac Toe Game with AI Prediction
play_tic_tac_toe() {
    echo "Starting Tic Tac Toe Game..."

    # Initialize the board
    board=(1 2 3 4 5 6 7 8 9)
    current_player="X"
    game_over=0
    move_count=0

    # Function to display the board
    display_board() {
        clear
        echo "Tic Tac Toe - Player $current_player's turn"
        echo "====================="
        echo " ${board[0]} | ${board[1]} | ${board[2]} "
        echo "-----------"
        echo " ${board[3]} | ${board[4]} | ${board[5]} "
        echo "-----------"
        echo " ${board[6]} | ${board[7]} | ${board[8]} "
        echo "====================="
    }

    # Function to get AI prediction
    get_ai_prediction() {
        # Convert board to string format for Python (replace numbers with spaces)
        local board_str=""
        for cell in "${board[@]}"; do
            if [[ $cell == "X" || $cell == "O" ]]; then
                board_str+="$cell"
            else
                board_str+=" "
            fi
        done

        # Call my Python AI model
        #local ml_prediction=$(python tic_tac_toe_ai.py "$board_str" 2>/dev/null)
        #local minimax_prediction=$(python tic_tac_toe_minimax.py "$board_str" 2>/dev/null)
        #echo "AI Analysis:"
        #echo "====================="
        #echo "ML AI Prediction: $ml_prediction"
        #echo "Minimax Prediction: $minimax_prediction"

        python tic_tac_toe_ai.py "$board_str"
    # Minimax Prediction
        python tic_tac_toe_minimax.py "$board_str"
       # echo "====================="
    }

    # Function to check for a win
    check_win() {
        # Check rows
        for ((i=0; i<9; i+=3)); do
            if [[ ${board[$i]} == ${board[$i+1]} && ${board[$i+1]} == ${board[$i+2]} ]]; then
                return 0
            fi
        done

        # Check columns
        for ((i=0; i<3; i++)); do
            if [[ ${board[$i]} == ${board[$i+3]} && ${board[$i+3]} == ${board[$i+6]} ]]; then
                return 0
            fi
        done

        # Check diagonals
        if [[ ${board[0]} == ${board[4]} && ${board[4]} == ${board[8]} ]]; then
            return 0
        fi

        if [[ ${board[2]} == ${board[4]} && ${board[4]} == ${board[6]} ]]; then
            return 0
        fi

        return 1
    }

    # Function to check for a tie
    check_tie() {
        for cell in "${board[@]}"; do
            if [[ $cell != "X" && $cell != "O" ]]; then
                return 1
            fi
        done
        return 0
    }

    # Main game loop
    while [[ $game_over -eq 0 ]]; do
        display_board

        # Show AI prediction after 5 moves
        if [[ $move_count -ge 5 ]]; then
            echo "AI Analysis:"
            get_ai_prediction
            echo "====================="
        fi

        # Get player input
        while true; do
            read -p "Player $current_player, choose a position (1-9): " position
            if [[ $position -ge 1 && $position -le 9 ]]; then
                index=$((position-1))
                if [[ ${board[$index]} != "X" && ${board[$index]} != "O" ]]; then
                    board[$index]=$current_player
                    ((move_count++))
                    break
                else
                    echo "That position is already taken!"
                fi
            else
                echo "Please enter a number between 1 and 9!"
            fi
        done

        # Check for win
        if check_win; then
            display_board
            # Show final prediction
            if [[ $move_count -ge 5 ]]; then
                echo "Final AI Analysis:"
                get_ai_prediction
                echo "====================="
            fi
            echo "Player $current_player wins!"
            game_over=1
        # Check for tie
        elif check_tie; then
            display_board
            # Show final prediction
            if [[ $move_count -ge 5 ]]; then
                echo "Final AI Analysis:"
                get_ai_prediction
                echo "====================="
            fi
            echo "It's a tie!"
            game_over=1
        else
            # Switch players
            if [[ $current_player == "X" ]]; then
                current_player="O"
            else
                current_player="X"
            fi
        fi
    done

    read -p "Press enter to return to main menu..."
}

# 2. Rock Paper Scissors Game
play_rock_paper_scissors() {
    echo "Starting Rock Paper Scissors Game..."

    options=("Rock" "Paper" "Scissors")
    player1_score=0
    player2_score=0

    while true; do
        clear
        echo "Rock Paper Scissors"
        echo "=================="
        echo "Player 1: $player1_score  |  Player 2: $player2_score"
        echo "=================="
        echo "1. Rock"
        echo "2. Paper"
        echo "3. Scissors"
        echo "4. Quit to main menu"
        echo "=================="

        # Get Player 1 choice
        while true; do
            read -p "Player 1, choose (1-3): " choice1
            if [[ $choice1 -ge 1 && $choice1 -le 3 ]]; then
                break
            elif [[ $choice1 -eq 4 ]]; then
                return
            else
                echo "Please enter a number between 1 and 4!"
            fi
        done

        # Get Player 2 choice
        while true; do
            read -p "Player 2, choose (1-3): " choice2
            if [[ $choice2 -ge 1 && $choice2 -le 3 ]]; then
                break
            elif [[ $choice2 -eq 4 ]]; then
                return
            else
                echo "Please enter a number between 1 and 4!"
            fi
        done

        # Adjust choices to array indices
        choice1=$((choice1-1))
        choice2=$((choice2-1))

        # Display choices
        echo "Player 1 chose: ${options[$choice1]}"
        echo "Player 2 chose: ${options[$choice2]}"

        # Determine winner
        if [[ $choice1 -eq $choice2 ]]; then
            echo "It's a tie!"
        elif [[ $choice1 -eq 0 && $choice2 -eq 2 ]] || \
             [[ $choice1 -eq 1 && $choice2 -eq 0 ]] || \
             [[ $choice1 -eq 2 && $choice2 -eq 1 ]]; then
            echo "Player 1 wins!"
            ((player1_score++))
        else
            echo "Player 2 wins!"
            ((player2_score++))
        fi

        read -p "Press enter to continue..."
    done
}

# 3. Snake and Ladder Game
play_snake_and_ladder() {
    # Snake and ladder positions
    declare -A snakes=([16]=6 [47]=26 [49]=11 [56]=53 [62]=19 [64]=60 [87]=24 [93]=73 [95]=75 [98]=78)
    declare -A ladders=([1]=38 [4]=14 [9]=31 [21]=42 [28]=84 [36]=44 [51]=67 [71]=91 [80]=100)

    player1_position=0
    player2_position=0
    current_player=1

    # Color definitions
    RED='\033[0;31m'
    GREEN='\033[0;32m'
    YELLOW='\033[1;33m'
    BLUE='\033[0;34m'
    NC='\033[0m' # No Color

    roll_dice() {
        echo $((RANDOM % 6 + 1))
    }

    move_player() {
        local position=$1
        local dice=$2
        local player_num=$3

        # Move the player
        position=$((position + dice))

        # Check for snakes
        if [[ -n ${snakes[$position]} ]]; then
            #echo "Player $player_num: Oh no! Snake at $position. Sliding down to ${snakes[$position]}"
            position=${snakes[$position]}
        fi

        # Check for ladders
        if [[ -n ${ladders[$position]} ]]; then
            #echo "Player $player_num: Yay! Ladder at $position. Climbing up to ${ladders[$position]}"
            position=${ladders[$position]}
        fi

        # Ensure position doesn't exceed 100
        if [[ $position -gt 100 ]]; then
            position=$((100 - (position - 100)))
            echo "Player $player_num: Bounced back to $position"
        fi

        echo $position
    }

    # Function to display the board
    display_board() {
        clear
        echo "=================================================="
        echo "                SNAKE AND LADDER"
        echo "=================================================="
        echo -e "Player 1 (${GREEN}X${NC}): $player1_position  |  Player 2 (${RED}Y${NC}): $player2_position"
        echo "=================================================="
        echo

        # Draw the board (10x10 grid)
        for ((row=9; row>=0; row--)); do
            # Determine if this row should be printed left-to-right or right-to-left
            if [[ $((row % 2)) -eq 1 ]]; then
                # Right to left (odd rows)
                start=$((row * 10 + 10))
                end=$((row * 10 + 1))
                step=-1
            else
                # Left to right (even rows)
                start=$((row * 10 + 1))
                end=$((row * 10 + 10))
                step=1
            fi

            # Print the row
            for ((cell=start; cell != end + step; cell += step)); do
                # Check if this cell has a player
                if [[ $cell -eq $player1_position && $cell -eq $player2_position ]]; then
                    echo -ne "${YELLOW}XY${NC}\t"
                elif [[ $cell -eq $player1_position ]]; then
                    echo -ne "${GREEN}X${NC}\t"
                elif [[ $cell -eq $player2_position ]]; then
                    echo -ne "${RED}Y${NC}\t"
                else
                    # Check if this cell has a snake or ladder
                    if [[ -n ${snakes[$cell]} ]]; then
                        echo -ne "${BLUE}$cell(S)${NC}\t"
                    elif [[ -n ${ladders[$cell]} ]]; then
                        echo -ne "${BLUE}$cell(L)${NC}\t"
                    else
                        echo -ne "$cell\t"
                    fi
                fi
            done
            echo
            echo
        done

        echo "=================================================="
        echo -e "${GREEN}X${NC} = Player 1, ${RED}Y${NC} = Player 2, ${BLUE}S${NC} = Snake, ${BLUE}L${NC} = Ladder"
        echo "=================================================="
    }

    while true; do
        display_board

        echo "Current player: $current_player"
        echo "1. Roll dice"
        echo "2. Quit game"
        read -p "Choose option (1-2): " option

        if [[ $option -eq 2 ]]; then
            echo "Quitting game..."
            read -p "Press enter to return to main menu..."
            return
        elif [[ $option -ne 1 ]]; then
            echo "Invalid option!"
            read -p "Press enter to continue..."
            continue
        fi

        dice=$(roll_dice)
        echo "Player $current_player rolled a $dice"

        if [[ $current_player -eq 1 ]]; then
            # Capture only the last line (position) from move_player output
            player1_position=$(move_player $player1_position $dice 1 )
            echo "Player 1 is now at position $player1_position"

            if [[ $player1_position -eq 100 ]]; then
                display_board
                echo "Player 1 wins!"
                break
            fi

            current_player=2
        else
            # Capture only the last line (position) from move_player output
            player2_position=$(move_player $player2_position $dice 2 )
            echo "Player 2 is now at position $player2_position"

            if [[ $player2_position -eq 100 ]]; then
                display_board
                echo "Player 2 wins!"
                break
            fi

            current_player=1
        fi

        read -p "Press enter to continue..."
    done

    read -p "Press enter to return to main menu..."
}

# 4. Quiz Game
play_quiz_game() {
    echo "Starting Quiz Game..."

    # Quiz questions and answers
    questions=(
        "What is the capital of France?|Paris"
        "How many continents are there?|7"
        "What is the largest planet in our solar system?|Jupiter"
        "Who painted the Mona Lisa?|Leonardo da Vinci"
        "What is the chemical symbol for gold?|Au"
    )

    score=0
    total_questions=${#questions[@]}

    clear
    echo "Quiz Game"
    echo "========="

    for ((i=0; i<total_questions; i++)); do
        IFS='|' read -r question answer <<< "${questions[$i]}"
        echo "Question $((i+1)): $question"
        read -p "Your answer: " user_answer

        if [[ ${user_answer^^} == ${answer^^} ]]; then
            echo "Correct!"
            ((score++))
        else
            echo "Incorrect! The correct answer is: $answer"
        fi
        echo
    done

    echo "Quiz completed! Your score: $score/$total_questions"
    read -p "Press enter to return to main menu..."
}

# 5. Guess the Number Game
play_guess_the_number() {
    echo "Starting Guess the Number Game..."

    min=1
    max=100
    number=$((RANDOM % max + min))
    attempts=0
    guessed=0

    clear
    echo "Guess the Number"
    echo "================"
    echo "I'm thinking of a number between $min and $max"

    while [[ $guessed -eq 0 ]]; do
        read -p "Enter your guess: " guess
        ((attempts++))

        if ! [[ $guess =~ ^[0-9]+$ ]]; then
            echo "Please enter a valid number!"
        elif [[ $guess -lt $min || $guess -gt $max ]]; then
            echo "Please enter a number between $min and $max!"
        elif [[ $guess -lt $number ]]; then
            echo "Too low!"
        elif [[ $guess -gt $number ]]; then
            echo "Too high!"
        else
            echo "Congratulations! You guessed the number in $attempts attempts!"
            guessed=1
        fi
    done

    read -p "Press enter to return to main menu..."
}

# Main program loop
while true; do
    show_dashboard
    read -p "Enter your choice (1-6): " choice

    case $choice in
        1) play_tic_tac_toe ;;
        2) play_rock_paper_scissors ;;
        3) play_snake_and_ladder ;;
        4) play_quiz_game ;;
        5) play_guess_the_number ;;
        6) 
            echo "Thank you for playing! Goodbye!"
            exit 0
            ;;
        *)
            echo "Invalid choice! Please enter a number between 1 and 6."
            sleep 2
            ;;
    esac
done