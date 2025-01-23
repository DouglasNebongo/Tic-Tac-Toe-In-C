# Tic-Tac-Toe Game in C
Xs and Os Game In C

Welcome to the Tic-Tac-Toe game repository! This is a simple implementation of a modified Tic-Tac-Toe game written in the C programming language. The game is played in the terminal and supports two players taking turns to drop their tokens into a 3x3 grid.

## Table of Contents
- [Features](#features)
- [How to Play](#how-to-play)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Features
- Two-player gameplay (Player 1: `X`, Player 2: `O`).
- Simple and intuitive terminal-based interface.
- Tokens drop to the lowest empty cell in the selected column.
- Input validation to ensure valid moves.
- Win and draw detection.
- Clear and easy-to-understand code structure.

## How to Play
1. The game is played on a 3x3 grid.
2. Player 1 is `X`, and Player 2 is `O`.
3. Players take turns entering their moves by specifying the column number (1-3).
4. The token will drop to the lowest empty cell in the selected column.
5. The first player to get three of their marks in a row (horizontally, vertically, or diagonally) wins the game.
6. If all squares are filled and no player has won, the game ends in a draw.

## Installation
To run this game on your local machine, follow these steps:

1. **Clone the repository:**
   ```bash
   gh repo clone DouglasNebongo/Tic-Tac-Toe-In-C
   cd tic-tac-toe-c
   gcc tic_tac_toe.c -o tic_tac_toe
   ./tic_tac_toe
