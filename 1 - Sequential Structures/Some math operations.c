//This algorithm receives 2 numbers and returns the addition, subtraction, multiplication, division and remainder of the division between them.

#include <stdio.h>

int main(void)
{
    int num1, num2, sum, sub, mult, rest;
    float divf;

    printf("Inform the first number: ");
    scanf("%d", &num1);
    printf("Inform the second number: ");
    scanf("%d", &num2);

    sum = num1+num2;
    sub = num1-num2;
    mult = num1*num2;
    divf = num1/(num2*1.0);
    rest = num1%num2;

    printf("Operations with the given numbers: \n");
    printf("Addition= %d\n",sum);
    printf("Subtraction= %d\n",sub);
    printf("Multiplication= %d\n",mult);
    printf("Division= %.2f\n", divf);
    printf("Remainder of the division= %d\n",rest);

    return 0;
}
