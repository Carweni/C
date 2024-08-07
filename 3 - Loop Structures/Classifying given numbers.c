/*This program reads integers entered by the user until a negative value is provided. It then counts
  the occurrences according to the specified conditions and prints the results.
  Conditions:
  a - The number is less than 10 or greater than 100;
  b - The number is odd;
  c - The number is divisible by 10;
  d - The number is between 10 and 100;
  e - The number is 30;
  f - The number isn't 10, 20 or 30.*/

#include <stdio.h>

int main(void)
{
    int num, contA = 0, contB = 0, contC = 0, contD = 0, contE = 0, contF = 0;

    do
    {
        printf("Enter a number (negative to exit): ");
        scanf("%d", &num);

        if (num >= 0)
        {
            if (num < 10 || num > 100)
            {
                contA++;
            }

            if (num % 2 != 0)
            {
                contB++;
            }

            if (num % 10 == 0)
            {
                contC++;
            }

            if (num >= 10 && num <= 100)
            {
                contD++;
            }

            if (num == 30)
            {
                contE++;
            }

            if (num != 10 && num != 20 && num != 30)
            {
                contF++;
            }
        }
    } while (num >= 0);

    printf("\nThe quantity of numbers less than 10 or greater than 100 is: %d", contA);
    printf("\nThe quantity of odd numbers is: %d", contB);
    printf("\nThe quantity of numbers divisible by 10 is: %d", contC);
    printf("\nThe quantity of numbers between 10 and 100 is: %d", contD);
    printf("\nThe number of times the number 30 is entered is: %d", contE);
    printf("\nThe quantity of times a number different from 10, 20, or 30 is entered is: %d", contF);

    return 0;
}
