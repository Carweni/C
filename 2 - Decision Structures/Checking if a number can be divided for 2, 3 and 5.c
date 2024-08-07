/*This algorithm reads a number and informs if it:
a) Is divisible by 5, 3, or 2;
Example: 30 is divisible by 2, 3, and 5.
b) Is divisible only by 5 and 3; by 5 and 2; or by 3 and 2;
Example: 15 is divisible only by 3 and 5.
Example: 10 is divisible only by 5 and 2.
Example: 6 is divisible only by 3 and 2.
c) Is divisible only by 5, 3, or 2;
Example: 25 is divisible only by 5.
d) Is not divisible by any of them;
Example: 7 is not divisible by 5, 3, or 2.*/

#include <stdio.h>

int main(void){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0 && num % 3 == 0 && num % 5 == 0)
    {
        printf("%d is divisible by 2, 3, and 5.", num);
    }
    else if (num % 2 != 0 && num % 3 == 0 && num % 5 == 0)
    {
        printf("%d is divisible only by 3 and 5.", num);
    }
    else if (num % 2 == 0 && num % 3 != 0 && num % 5 == 0)
    {
        printf("%d is divisible only by 2 and 5.", num);
    }
    else if (num % 2 == 0 && num % 3 == 0 && num % 5 != 0)
    {
        printf("%d is divisible only by 2 and 3.", num);
    }
    else if (num % 2 == 0 && num % 3 != 0 && num % 5 != 0)
    {
        printf("%d is divisible only by 2.", num);
    }
    else if (num % 2 != 0 && num % 3 == 0 && num % 5 != 0)
    {
        printf("%d is divisible only by 3.", num);
    }
    else if (num % 2 != 0 && num % 3 != 0 && num % 5 == 0)
    {
        printf("%d is divisible only by 5.", num);
    }
    else
    {
        printf("%d is not divisible by 2, 3, or 5.", num);
    }

    return 0;
}
