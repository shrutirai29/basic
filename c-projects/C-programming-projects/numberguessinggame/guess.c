#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int random, guess;
    int number_of_guesses = 0;
    printf("Welcome to the number guessing game!!!\n\n");
    printf("I have chosen a number between 1 and 100. Try to guess it.\n\n");
    
    srand(time(NULL));
    random = rand() % 100 + 1; // Generate a random number between 1 and 100

    do{
        printf("Enter your guess from 1 to 100: ");
        scanf("%d", &guess);

        if (guess > random){
            printf("Too high! Try again.(guess smaller number)\n\n");
            number_of_guesses++;
        } else if (guess < random){
            printf("Too low! Try again.(guess larger number)\n\n");
            number_of_guesses++;
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n\n You are very good at this game.\n\n", number_of_guesses);
        }
    } while (guess != random);

    printf("Thank you for playing the game.\n\n");
    printf("Please come back again.\n\n");

    printf("Developed by: Shruti Rai\n\n");
}