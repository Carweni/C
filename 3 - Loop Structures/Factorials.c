/* The factorial of a number is the product of all positive integers less than or equal to the number.
   Example: Factorial of 5 is 1 * 2 * 3 * 4 * 5 = 120. 
   This program calculates and displays the factorial of a number provided by the user within the range of 1 to 20.*/

#include <stdio.h>

int main(void)
{
    int num, i;
    long long int factorial = 1;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);
    } while (num < 1 || num > 20);

    printf("%d! = ", num);

    for (i = num; i >= 2; i--)
    {
        printf(" %d *", i);
        factorial = factorial * i;
    }
    
    printf(" 1 = %lld", factorial);

    return 0;
}
