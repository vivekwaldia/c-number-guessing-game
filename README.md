# 🎮 Number Guessing Game

A fun and interactive command-line number guessing game written in C with intelligent proximity hints and multiple difficulty levels!

## ✨ Features

- **Three Difficulty Levels**
  - 🟢 Easy: Guess numbers between 0-50
  - 🟡 Medium: Guess numbers between 0-100
  - 🔴 Hard: Guess numbers between 0-500

- **Smart Proximity Hints**
  - Dynamic feedback based on how close you are to the answer
  - Five levels of hints: "Super close", "Very close", "Getting warm", "Somewhat far", and "Way off"
  - Hints scale proportionally with the difficulty level

- **User-Friendly Design**
  - Input validation to handle invalid entries
  - Range checking to keep guesses within bounds
  - Try counter to track your performance
  - Option to play multiple rounds

## 🚀 Getting Started

### Prerequisites

- GCC compiler (or any C compiler)
- Terminal/Command prompt

### Compilation
```bash
gcc number_guessing_game.c -o number_game
```

### Running the Game
```bash
./number_game
```

On Windows:
```bash
number_game.exe
```

## 🎯 How to Play

1. Launch the game and select your difficulty level (1-3)
2. The game will generate a random number within the chosen range
3. Enter your guesses and follow the proximity hints
4. Keep guessing until you find the correct number!
5. Choose whether to play again or exit

## 📋 Example Gameplay
```
==== NUMBER GUESSING GAME ====

Select difficulty level:
1. Easy (0-50)
2. Medium (0-100)
3. Hard (0-500)
Enter choice (1-3): 2

Guess the number between 0 and 100

Enter your guess: 50
Getting warm. Try a higher number.
Enter your guess: 75
Very close. Try a lower number.
Enter your guess: 68
Super close! Try a higher number.
Enter your guess: 70
CORRECT!
You guessed it in 4 tries.
```

## 🛠️ Technical Details

- **Language:** C
- **Random Number Generation:** Uses `rand()` seeded with current time
- **Input Handling:** Robust error checking for non-numeric inputs
- **Hint Algorithm:** Dynamic thresholds based on the number range (2%, 5%, 10%, 20% of range)

## 🎲 Difficulty Settings

| Level | Range | Ideal Tries |
|-------|-------|-------------|
| Easy | 0-50 | 6-8 |
| Medium | 0-100 | 7-10 |
| Hard | 0-500 | 9-12 |

## 🤝 Contributing

Feel free to fork this project and add your own features! Some ideas:
- Add a score system
- Implement a limited tries mode
- Add sound effects
- Create a high score leaderboard

## 📝 License

This project is free to use and modify for personal and educational purposes.

## 👨‍💻 Author

Created with ❤️ as a fun C programming exercise

---

**Enjoy the game and happy guessing!** 🎉
