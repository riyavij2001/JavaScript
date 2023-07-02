# Guess the Number Game - Python

This is a simple command-line game called "Guess the Number" implemented in Python. The game randomly generates a number between a specified range, and the player has to guess that number within a limited number of attempts. The game provides feedback to the player after each guess, indicating whether the guess was too high or too low.

## Getting Started

These instructions will help you set up and run the game on your local machine.

## Prerequisites

To run the game, you need to have Python installed on your system. You can download the latest version of Python from the official Python website: https://www.python.org/downloads/

## Installing

1. Clone the repository or download the source code files.
2. Open a terminal or command prompt and navigate to the project directory.

## Running the Game

To start the game, execute the following command in the terminal:

```bash
python guess_the_number.py
```
The game will display instructions and ask you to enter the range of numbers to generate (e.g., from 1 to 100). After that, it will prompt you to guess a number within that range.

## How to Play

To use this application, follow the instructions below:

1. Enter the range of numbers you want to play with.
2. The game will randomly select a number within that range.
3. You need to enter your guess.
4. The game will provide feedback, telling you whether your guess was too high or too low.
5. Keep guessing until you find the correct number or exhaust all your attempts.
6. The game will display the final result, including the generated number and the number of attempts you took.

## Customization

You can modify the following parameters in the guess_the_number.py file to customize the game:

```bash
randnumber = random.randint(1, 100)
```
-  1 represents the minimum number in the range, and 100 represents the maximum number in the range. You can modify these values to change the range of numbers generated.
```bash
userGuess = int(input("Enter your guess (1-100): "))
```

-  The prompt message in the input function can be modified to provide a different user instruction or to reflect the chosen range.
```bash
with open("High-Score.txt", "r") as f:
    highscore = int(f.read())
```

-  The file name "High-Score.txt" can be changed to any desired name. Make sure to keep the .txt extension.
-  You can also modify how the high score is stored and retrieved based on your requirements.

Feel free to adjust these values and customize the code according to your preferences and game rules.

## Acknowledgements

This game was created as a simple project to practice Python programming skills. It demonstrates the use of random number generation, user input, conditional statements, and loops.

## License
This project is licensed under the MIT License. See the LICENSE file for details.
