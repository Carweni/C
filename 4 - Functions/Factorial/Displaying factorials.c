/*This code provides a simple menu-driven program for calculating and displaying factorials either 
for a predefined set of numbers or for user-defined numbers until the user decides to exit.*/

#include <stdio.h>
#include "factorial.h"

int main(void)
{
    int n, num;
    char option, response;

    do
    {
        setbuf(stdin, NULL);
        printf("A - Factorial between 1 and 8;\nB - Factorial of a positive number.\nChoose an option: ");
        scanf("%c", &option);
        option = toupper(option);

        switch (option)
        {
        case 'A':
            {
                for (num = 1; num <= 8; num++)
                {
                    factorial(num);
                    displayResult(num);
                }
                break;
            }
        case 'B':
            {
                do
                {
                    printf("\nEnter a number(-1 to exit): ");
                    scanf("%d", &n);

                    if (n > 0)
                    {
                        factorial(n);
                        displayResult(n);
                    }
                    else if (n == 0)
                    {
                        printf("0! = 1\n");
                    }
                }
                while (n >= 0);
                break;
            }
        }

        setbuf(stdin, NULL);
        printf("Do you want to repeat the program (Y/y)? ");
        scanf("%c", &response);
    }
    while (response == 'Y' || response == 'y');

    return 0;
}
