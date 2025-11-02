# 🔢 Number Guessing Game 🎮

This is a simple, console-based number guessing game written in C. The player must guess a randomly generated number within a selected range, receiving hints based on how close their guess is to the secret number.

## ✨ Features

* **Three Difficulty Levels**:
    * **Easy (🥳)**: Guess a number between 0 and 50.
    * **Medium (🤔)**: Guess a number between 0 and 100.
    * **Hard (🤯)**: Guess a number between 0 and 500.
* **Dynamic Hints**: The game provides feedback to help you narrow down the guess. It will tell you if your guess is:
    * 🧊 Way off
    * 🥶 Somewhat far
    * 🔥 Getting warm
    * 🥵 Very close
    * 🌋 Super close
* **Directional Guidance**: Each hint also tells you whether to guess a **higher (⬆️)** or **lower (⬇️)** number.
* **Input Validation (🛡️)**: The game checks for invalid inputs (like letters or symbols) and out-of-range numbers, prompting the user to enter a valid guess.
* **Try Counter (📊)**: After successfully guessing the number, the game reports how many tries it took.
* **Play Again (🔄)**: Players are given the option to play another round or quit the game.

## 🕹️ How to Play

1.  Run the executable program.
2.  You will be prompted to select a difficulty level (1 for Easy, 2 for Medium, 3 for Hard).
3.  Enter your choice and press Enter.
4.  The game will start. Enter a number to make your first guess.
5.  Read the hint provided to see how close you are and whether your guess was too high or too low.
6.  Continue guessing until you find the correct number. 🎯
7.  Once you win, the game will show your total number of tries.
8.  You will then be asked if you want to play again. Enter `1` for Yes or `2` for No.

## 🛠️ How to Compile and Run

### Prerequisites

You need a C compiler, such as **GCC**, installed on your system.

### Steps

1.  **Save the Code**: Save the code into a file named `game.c` (or any name you prefer).

2.  **Compile the Code**:
    Open your terminal or command prompt, navigate to the directory where you saved the file, and run the following command:
    ```sh
    gcc game.c -o guesser
    ```
    This command compiles the `game.c` file and creates an executable file named `guesser`.

3.  **Run the Game**:
    Execute the compiled program by running:
    ```sh
    ./guesser
    ```
    On Windows, you might just type:
    ```sh
    guesser
    ```
