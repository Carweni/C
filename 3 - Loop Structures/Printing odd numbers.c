/* This program reads a number that indicates the quantity of odd numbers starting from 1 to be displayed. The value
   entered for the quantity must be greater than 0. */

#include<stdio.h>

int main(void)
{
    int num, i = 1, oddCount = 0;

    do
    {
        printf("How many odd numbers do you want to display? (Enter a number greater than 0): ");
        scanf("%d", &num);

        if (num <= 0)
        {
            printf("Invalid value.\n");
        }

    } while (num <= 0);

    do
    {
        printf("%d\t", i);
        oddCount++;
        i = i + 2;
    } while (oddCount < num);

    return 0;
}
