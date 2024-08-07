/*This program determines whether a year entered by the user is a leap year. The logic for leap years
 is based on the conditions that a year is a leap year if it is divisible by 4 but not divisible by 100,
 or if it is divisible by 400. The program then prints whether the entered year is a leap year or not.*/

#include <stdio.h>

int main(void)
{
    int year;

    printf("Enter the year: ");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("The entered year is a leap year. ");
    }
    else
    {
        printf("The entered year is not a leap year. ");
    }

    return 0;
}
