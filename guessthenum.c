#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int randomNumber = (rand() % 100) + 1;


    int guessNumber;
    int num_of_guesses = 0;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number.\n");
    printf("Guess the number between 1 and 100.\n");



    do {
        printf("Enter your guess: ");
        if (scanf("%d", &guessNumber) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            while (getchar() != '\n'); // clear input buffer
            continue;
        }

        if (guessNumber > randomNumber) {
            printf("Your guess is greater than the selected number.\n");
        } else if (guessNumber < randomNumber) {
            printf("Your guess is lower than the selected number.\n");
        } else {
            printf("Congrats!! You guessed the correct number!\n");
        }

        num_of_guesses++;

    } while (guessNumber != randomNumber);

    printf("You took %d guesses to guess the number.\n", num_of_guesses);

    return 0;
}
