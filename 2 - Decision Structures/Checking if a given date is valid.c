/*This program reads a date in the format ddmmaaaa, separates it into day, month, and year, and then checks whether 
  the date is valid or not. The program considers the number of days in each month and accounts for leap years to 
  determine the validity of the date. The result is printed as "Valid date" or "Invalid date."*/

#include <stdio.h>

int main(void)
{
    int date, day, month, year;

    printf("Enter a date in the format ddmmaaaa: ");
    scanf("%d", &date);

    day = (int)date / 1000000;
    month = (int)date / 10000 - day * 100;
    year = (int)date - (day * 1000000) - (month * 10000);

    if (year >= 0 && year <= 9999)
    {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            if (day >= 1 && day <= 31)
            {
                printf("Valid date");
            }
            else
            {
                printf("Invalid date");
            }
        }
        if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            if (day >= 1 && day <= 30)
            {
                printf("Valid date");
            }
            else
            {
                printf("Invalid date");
            }
        }
        if (month == 2)
        {
            if (day >= 1 && day <= 28)
            {
                printf("Valid date");
            }
            else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            {
                if (day >= 1 && day <= 29)
                {
                    printf("Valid date");
                }
            }
            else
            {
                printf("Invalid date");
            }
        }
        if (month < 1 || month > 12)
        {
            printf("Invalid date");
        }
    }
    else if (year < 0 || year > 9999)
    {
        printf("Invalid date");
    }

    return 0;
}
