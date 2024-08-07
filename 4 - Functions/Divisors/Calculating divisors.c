/*This code provides a menu-driven program for performing various divisor-related calculations and
 GCD calculations based on user input, and it continues to execute until the user decides to exit.*/

#include <stdio.h>
#include "divisors.h"

int main(void)
{
    char response;
    int option, num, num2, lowerLimit, upperLimit, value1, value2;

    do
    {
        setbuf(stdin, NULL);
        printf("\n1 - Number of divisors for a number\n2 - Divisors of a number\n3 - Divisors, quantity, and sum within a range\n4 - Greatest Common Divisor of two numbers\nOption: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            {
                printf("Enter a number to display the number of divisors: ");
                scanf("%d", &num);
                if (num >= 0)
                {
                    printf("%d divisors", numberOfDivisors(num));
                }
                else
                {
                    num = num * (-1);
                    printf("%d divisors", numberOfDivisors(num));
                }
                break;
            }
        case 2:
            {
                printf("Enter a number to display its divisors: ");
                scanf("%d", &num2);
                displayDivisors(num2);
                break;
            }
        case 3:
            {
                printf("Enter the lower limit: ");
                scanf("%d", &lowerLimit);
                do
                {
                    printf("Enter the upper limit: ");
                    scanf("%d", &upperLimit);
                }
                while (upperLimit < lowerLimit);

                quantityAndSumWithinRange(lowerLimit, upperLimit);
                break;
            }
        case 4:
            {
                printf("Enter the first value: ");
                scanf("%d", &value1);
                printf("Enter the second value: ");
                scanf("%d", &value2);

                printf("GCD = %d", greatestCommonDivisor(value1, value2));
                break;
            }
        default:
            {
                printf("Invalid option. ");
                break;
            }
        }

        setbuf(stdin, NULL);
        printf("\nDo you want to continue in the program (Y/y)? ");
        scanf("%c", &response);
    }
    while (response == 'y' || response == 'Y');
}
