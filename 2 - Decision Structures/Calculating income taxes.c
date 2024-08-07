/* This algorithm calculates the income tax of a person according to the following table:
Annual income Tax rate:
Up to U$ 10,000.00 = 0%
U$ 10,000.00 and <= U$ 25,000.00 = 10%
Above R$ 25,000.00 = 25%
Tax rate is the percentage used to calculate the income tax to be paid.
If a negative value is entered, it does not perform the calculation and informs the user about it.*/

#include <stdio.h>

int main(void){
    float income, tax;

    printf("Enter your annual income: ");
    scanf("%f", &income);

    if (income <= 10000 && income >= 0)
    {
        printf("Your income tax is zero.");
    }
    else if (income > 10000 && income <= 25000)
    {
        tax = income * 0.1;

        printf("Your income tax is U$ %.2f.", tax);
    }
    else if (income > 25000)
    {
        tax = income * 0.25;

        printf("Your income tax is U$ %.2f.", tax);
    }
    else
    {
        printf("Invalid income value.");
    }

    return 0;
}
