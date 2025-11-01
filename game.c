#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define EASY_MAX 50
#define MEDIUM_MAX 100
#define HARD_MAX 500

void playGame(int min, int max){
    int answer = (rand() % (max - min + 1)) + min;
    int guess = 0, tries = 0;
    int difference;

    printf("Guess the number between %d and %d\n\n", min, max);

    while(1){
        printf("Enter your guess: ");
        
        if(scanf("%d", &guess) != 1){
            printf("Invalid input! Enter numbers only.\n");
            while(getchar() != '\n');
            continue;
        }

        tries++;

        if(guess < min || guess > max){
            printf("Out of range! Please enter between %d and %d.\n", min, max);
            continue;
        }

        if(guess == answer){
            printf("CORRECT!\n");
            if(tries == 1){
                printf("You guessed it in 1 try.\n\n");
            }else{
                printf("You guessed it in %d tries.\n\n", tries);
            }
            break;
        }

        // Calculate how close the guess is
        difference = abs(guess - answer);
        
        if(guess > answer){
            printf("TOO HIGH! ");
        }else{
            printf("TOO LOW! ");
        }

        // Provide proximity hints
        if(difference == 1){
            printf("SO CLOSE! Just 1 away!\n");
        }else if(difference <= 5){
            printf("Very close! Within 5.\n");
        }else if(difference <= 10){
            printf("Getting warm! Within 10.\n");
        }else if(difference <= 20){
            printf("Warm! Within 20.\n");
        }else if(difference <= 50){
            printf("You're in the neighborhood.\n");
        }else{
            printf("Way off!\n");
        }
    }
}

int main(){
    srand(time(NULL));

    int choice, playAgain = 1;

    printf("==== NUMBER GUESSING GAME ====\n\n");

    while(playAgain == 1){
        printf("Select difficulty level:\n");
        printf("1. Easy (0-%d)\n", EASY_MAX);
        printf("2. Medium (0-%d)\n", MEDIUM_MAX);
        printf("3. Hard (0-%d)\n", HARD_MAX);
        printf("Enter choice (1-3): ");

        if(scanf("%d", &choice) != 1){
            printf("Invalid input! Enter numbers only.\n\n");
            while(getchar() != '\n');
            continue;
        }

        switch(choice){
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

        while(1){
            printf("Do you want to play again?\n");
            printf("1. Yes\n");
            printf("2. No\n");
            printf("Enter choice: ");
            
            if(scanf("%d", &playAgain) != 1){
                printf("Invalid input! Enter 1 or 2.\n\n");
                while(getchar() != '\n');
                continue;
            }
            
            if(playAgain == 1 || playAgain == 2){
                break;
            }
            
            printf("Invalid choice! Enter 1 or 2.\n\n");
        }
        
        printf("\n");
    }

    printf("Thank you for playing! :)\n");

    return 0;
}