//This code puts three number in ascending order.

#include <stdio.h>

int main(void){
    int num1, num2, num3, smallest, middle, largest;

    printf("Enter the first integer number: ");
    scanf("%d", &num1);
    printf("Enter the second integer number: ");
    scanf("%d", &num2);
    printf("Enter the third integer number: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        largest = num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        largest = num2;
    }
    else
    {
        largest = num3;
    }

    if ((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3))
    {
        middle = num1;
    }
    else if ((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3))
    {
        middle = num2;
    }
    else
    {
        middle = num3;
    }

    if (num1 < num2 && num1 < num3)
    {
        smallest = num1;
    }
    else if (num2 < num1 && num2 < num3)
    {
        smallest = num2;
    }
    else
    {
        smallest = num3;
    }

    printf("\nSmallest: %d\nMiddle: %d\nLargest: %d\n", smallest, middle, largest);


    return 0;
}
