/*/This program implements a simple number guessing game with a magic number randomly generated.
   The user is prompted to guess the magic number, and the program provides feedback based on whether
   the guess is correct, too high, or too low*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int magicNum, lowerLimit = 0, upperLimit = 10, num;

    magicNum = rand() % ((upperLimit - lowerLimit) + 1) + lowerLimit;

    printf("Try to guess the magic number: ");
    scanf("%d", &num);

    if (num == magicNum)
    {
        printf("Correct! %d is the magic number. ", num);
    }
    else if (num > magicNum)
    {
        printf("Wrong, too high!");
    }
    else
    {
        printf("Wrong, too low!");
    }

    return 0;
}
