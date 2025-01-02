#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0, guessed_number;

    // printf("Random Number: %d\n", randomNumber);
    // printf("Guess the number");

    do
    {
        printf("Guess the number: ");
        
        // Check if the user entered a valid integer
        if (scanf("%d", &guessed_number) != 1)
        {
            // Handle invalid input (non-integer)
            while (getchar() != '\n');  // clear the input buffer
            printf("Invalid input! Please enter an integer.\n");
            continue;  // skip the rest of the loop and ask again
        }

        if (guessed_number > randomNumber)
        {
            printf("Lower number please!\n");
        }
        else if (guessed_number < randomNumber)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("Congrats!! You guessed the right number!\n");
        }
        no_of_guesses++;

    } while (guessed_number != randomNumber);

    printf("You guessed the number in %d guesses\n", no_of_guesses);

    return 0;
}
