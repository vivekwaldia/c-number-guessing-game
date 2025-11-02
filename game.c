#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// define the maximum ranges with respect to the difficulty levels
#define EASY_MAX 50
#define MEDIUM_MAX 100
#define HARD_MAX 500

void playGame(int min, int max) {
    int answer = (rand() % (max - min + 1)) + min; // formula to generate a random number within the range
    int guess = 0, tries = 0;
    int difference;

    printf("Guess the number between %d and %d\n\n", min, max);

    int range = max - min; // calculate the total range for possible proximity values
    int veryClose = range / 50; // guess is within 2% of the range
    int close = range / 20; // guess is within 5% of the range
    int warm = range / 10; // guess is within 10% of the range
    int far = range / 5; // guess is within 20% of the range        

    while (1) {
        printf("Enter your guess: ");

        if (scanf("%d", &guess) != 1) { // check if scanf() scanned at least one integer value or not
            printf("Invalid input! Enter numbers only.\n");
            while (getchar() != '\n'); // clear input buffer if any character other than integer was entered
            continue; // restart the loop to prompt the user for guess input
        }

        tries++;

        if (guess < min || guess > max) { // define behaviour for out of range inputs
            printf("Out of range! Please enter between %d and %d.\n", min, max);
            continue; // restart the loop to prompt the user for guess input
        }

        if (guess == answer) { // check if the user's guess and the answer match
            printf("CORRECT!\n");
            if (tries == 1)
                printf("You guessed it in 1 try.\n\n");
            else
                printf("You guessed it in %d tries.\n\n", tries);
            break;
        }

        difference = abs(guess - answer); // calculate absolute distance between guess and answer

        // give proximity hints to user (closeness of user's guess to answer variable)
        if (difference <= veryClose) {
            if (guess > answer)
                printf("Super close! Try a slightly lower number.\n");
            else
                printf("Super close! Try a slightly higher number.\n");
        } else if (difference <= close) {
            if (guess > answer)
                printf("Very close. Try a lower number.\n");
            else
                printf("Very close. Try a higher number.\n");
        } else if (difference <= warm) {
            if (guess > answer)
                printf("Getting warm. Try a lower number.\n");
            else
                printf("Getting warm. Try a higher number.\n");
        } else if (difference <= far) {
            if (guess > answer)
                printf("Somewhat far. Try a lower number.\n");
            else
                printf("Somewhat far. Try a higher number.\n");
        } else {
            if (guess > answer)
                printf("Way off. Enter a much lower number.\n");
            else
                printf("Way off. Enter a much higher number.\n");
        }
    }
}

int main() {
    srand(time(NULL)); // seed the rand() function with current time for random value generation

    int choice, playAgain = 1;

    printf("==== NUMBER GUESSING GAME ====\n\n");

    while (playAgain == 1) {
        printf("Select difficulty level:\n");
        printf("1. Easy (0-%d)\n", EASY_MAX);
        printf("2. Medium (0-%d)\n", MEDIUM_MAX);
        printf("3. Hard (0-%d)\n", HARD_MAX);
        printf("Enter choice (1-3): ");

        if (scanf("%d", &choice) != 1) { // check if scanf() scanned at least one integer value or not
            printf("Invalid input! Enter numbers only.\n\n");
            while (getchar() != '\n'); // clear input buffer if any character other than integer was entered
            continue; // restart the loop to prompt the user for difficulty level input
        }

        /* define switch case for difficulty level entered by the user,
           pass defined macros as arguments to playGame() according to the user's entered choice */
        switch (choice) {
            case 1:
                playGame(0, EASY_MAX);
                break;
            case 2:
                playGame(0, MEDIUM_MAX);
                break;
            case 3:
                playGame(0, HARD_MAX);
                break;
            default:
                printf("Invalid choice! Please select 1, 2, or 3.\n\n");
                continue;
        }

        // prompt if the user wants to play again
        while (1) {
            printf("Do you want to play again?\n");
            printf("1. Yes\n");
            printf("2. No\n");
            printf("Enter choice: ");
            
            if (scanf("%d", &playAgain) != 1) { // check if scanf() scanned at least one integer value or not
                printf("Invalid input! Enter 1 or 2.\n\n");
                while (getchar() != '\n'); // clear input buffer if any character other than integer was entered
                continue; // restart the loop to prompt the user for play again input
            }
            
            if (playAgain == 1 || playAgain == 2) // break from the loop on valid user input
                break;

            printf("Invalid choice! Enter 1 or 2.\n\n");
        }

        printf("\n");
    }

    printf("Thank you for playing! :)\n"); // thank the user for playing this awesome game :)
    return 0;
}