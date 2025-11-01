# C Number Guessing Game 🎮

A command-line number guessing game written in C with multiple difficulty levels and proximity hints.

## Features ✨

* **Three Difficulty Levels:**
    * 🟢 **Easy:** Guess a number between 0 and 50.
    * 🟡 **Medium:** Guess a number between 0 and 100.
    * 🔴 **Hard:** Guess a number between 0 and 500.
* **Proximity Hints:** 🌡️ The game tells you if you're getting "warmer" or "colder" (e.g., "Very close! Within 5" or "Way off!").
* **Input Validation:** 🛡️ Prevents crashes by handling non-numeric or out-of-range inputs.
* **Play Again:** 🔁 A loop that lets you play again without restarting the program.
* **Try Counter:** 🎯 Tracks how many tries it took to guess the correct number.

## How to Compile and Run 🚀

1.  **Clone the repository** or download the `game.c` file.
2.  **Compile the code** using a C compiler like `gcc`:

    ```bash
    gcc game.c -o game
    ```

    *(If you named your file something other than `game.c`, change the command to match.)*
3.  **Run the executable:**

    ```bash
    ./game
    ```

## How to Play 🎲

1.  Run the program to see the main menu.
2.  Select a difficulty (1, 2, or 3).
3.  Start guessing the number!
4.  The game will tell you if your guess is **TOO HIGH ⬆️** or **TOO LOW ⬇️** and give you a hint about how close you are.
5.  Once you guess correctly, it will show your total tries.
6.  You will then be asked if you want to play again.
