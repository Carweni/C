//This program receives a decimal number, separates it into its integer and decimal part, ans then its integer in hundreds, tens and units.

#include <stdio.h>

int main(void)
{
    double num, partDec;
    int partInt, unit, ten, hundred;

    printf("Write a decimal number: ");
    scanf("%lf",&num);

    printf("\nInformed number: %lf",num);

    partInt = (int)num;
    partDec = num - partInt;

    printf("\nInteger part: %d\n",partInt);
    printf("Decimal part: %lf\n",partDec);

    hundred = partInt/100;
    ten = partInt%100/10;
    unit = partInt%10;

    printf("Hundred(s): %d\n", hundred);
    printf("Ten(s): %d\n", ten);
    printf("Unit(s): %d\n", unit);

    return 0;
}
