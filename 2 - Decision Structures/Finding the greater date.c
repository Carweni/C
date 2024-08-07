//This program takes two dates as input from the user, checks their validity, and then determines the greater date.

#include <stdio.h>

int main(void)
{
    int day1, day2, month1, month2, year1, year2, validity1, validity2;

    printf("Enter the first date:\nDay (dd): ");
    scanf("%d", &day1);
    printf("Month (mm): ");
    scanf("%d", &month1);
    printf("Year (yyyy): ");
    scanf("%d", &year1);

    printf("\nEnter the second date:\nDay (dd): ");
    scanf("%d", &day2);
    printf("Month (mm): ");
    scanf("%d", &month2);
    printf("Year (yyyy): ");
    scanf("%d", &year2);

    // Checking the validity of the first date:
    if (year1 >= 0 && year1 <= 9999)
    {
        if (month1 == 1 || month1 == 3 || month1 == 5 || month1 == 7 || month1 == 8 || month1 == 10 || month1 == 12)
        {
            validity1 = (day1 >= 1 && day1 <= 31) ? 1 : 2;
        }
        if (month1 == 4 || month1 == 6 || month1 == 9 || month1 == 11)
        {
            validity1 = (day1 >= 1 && day1 <= 30) ? 1 : 2;
        }
        if (month1 == 2)
        {
            validity1 = (day1 >= 1 && day1 <= 28) ? 1 : ((year1 % 4 == 0 && year1 % 100 != 0) || year1 % 400 == 0) ? (day1 >= 1 && day1 <= 29) ? 1 : 2 : 2;
        }
        if (month1 <= 0 || month1 >= 13)
        {
            validity1 = 2;
        }
    }
    else if (year1 < 0 || year1 > 9999)
    {
        validity1 = 2;
    }

    // Checking the validity of the second date:
    if (year2 >= 0 && year2 <= 9999)
    {
        if (month2 == 1 || month2 == 3 || month2 == 5 || month2 == 7 || month2 == 8 || month2 == 10 || month2 == 12)
        {
            validity2 = (day2 >= 1 && day2 <= 31) ? 3 : 4;
        }
        if (month2 == 4 || month2 == 6 || month2 == 9 || month2 == 11)
        {
            validity2 = (day2 >= 1 && day2 <= 30) ? 3 : 4;
        }
        if (month2 == 2)
        {
            validity2 = (day2 >= 1 && day2 <= 28) ? 3 : ((year2 % 4 == 0 && year2 % 100 != 0) || year2 % 400 == 0) ? (day2 >= 1 && day2 <= 29) ? 3 : 4 : 4;
        }
        if (month2 <= 0 || month2 >= 13)
        {
            validity2 = 4;
        }
    }
    else if (year2 < 0 || year2 > 9999)
    {
        validity2 = 4;
    }

    // Comparing the dates:
    if (validity1 == 1 && validity2 == 3)
    {
        if (day1 == day2 && month1 == month2 && year1 == year2)
        {
            printf("The dates are equal. ");
        }
        else if (year1 > year2)
        {
            printf("The greater date is %2.2d/%2.2d/%d.", day1, month1, year1);
        }
        else if (year1 < year2)
        {
            printf("The greater date is %2.2d/%2.2d/%d.", day2, month2, year2);
        }
        else
        {
            if (month1 > month2)
            {
                printf("The greater date is %2.2d/%2.2d/%d.", day1, month1, year1);
            }
            else if (month2 > month1)
            {
                printf("The greater date is %2.2d/%2.2d/%d.", day2, month2, year2);
            }
            else
            {
                if (day1 > day2)
                {
                    printf("The greater date is %2.2d/%2.2d/%d.", day1, month1, year1);
                }
                else if (day2 > day1)
                {
                    printf("The greater date is %2.2d/%2.2d/%d.", day2, month2, year2);
                }
            }
        }
    }
    else if (validity1 == 2 || validity2 == 4)
    {
        printf("Check the validity of the entered dates. ");
    }

    return 0;
}
