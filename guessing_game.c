// GUESSING NUMBER GAME
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guesse, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    // printf("The number is %d\n", number);
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guesse);
        if (guesse > number)
        {
            printf("Lower number please!\n");
        }
        else if (guesse < number)
        {
            printf("higher number please!\n");
        }
        else
        {
            printf("You guessed it in! %d attemps\n", nguesses);
        }
        nguesses++;

    } while (guesse != number);
    return 0;
}