#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[])
{
    int number, guess, nguess = 1, level;
    printf("Enter a level\n1=Easy\n2=Medium\n3=Hard\n");
    scanf("%d", &level);
    printf("Level is %d\n", level);
    if (level == 1)
    {
        srand(time(0));
        number = rand() % 100 + 1;
        printf("Guess the number between 1 to 100 \n");
        do
        {

            scanf("%d", &guess);
            if (guess > number)
            {
                printf("Lower number please \n");
            }
            else if (guess < number)
            {
                printf("Higher number please \n");
            }
            else
            {
                printf("You guessed it in %d attempts \n", nguess);
            }
            nguess++;
        } while (guess != number);
    }
    else if (level == 2)
    {
        srand(time(0));
        number = rand() % 1000 + 100;
        printf("Guess the number between 100 to 1000 \n");
        do
        {

            scanf("%d", &guess);
            if (guess > number)
            {
                printf("Lower number please \n");
            }
            else if (guess < number)
            {
                printf("Higher number please \n");
            }
            else
            {
                printf("You guessed it in %d attempts \n", nguess);
            }
            nguess++;
        } while (guess != number);
    }

    else if(level == 3)
    {
        srand(time(0));
        number = rand() % 10000 + 1000;
        printf("Guess the number between 1000 to 10000 \n");
        do
        {

            scanf("%d", &guess);
            if (guess > number)
            {
                printf("Lower number please \n");
            }
            else if (guess < number)
            {
                printf("Higher number please \n");
            }
            else
            {
                printf("You guessed it in %d attempts \n", nguess);
            }
            nguess++;
        } while (guess != number);
    }
    else
    {
        printf("Please enter a valid Level \n");
    }
    
}
