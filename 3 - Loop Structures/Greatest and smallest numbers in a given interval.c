/* This algorhithm reads a series of numbers indicated by the user until 0 (zero) is entered. Thein, it finds and displays the
greatest and smallest values entered by the user. 0 (zero) indicates the end of the input and is not considered.*/

#include<stdio.h>

int main(void)
{
    int num, greatest = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int smallest = num;

    while (num != 0)
    {
        if (greatest < num)
        {
            greatest = num;
        }
        else if (smallest > num)
        {
            smallest = num;
        }

        printf("Enter a number: ");
        scanf("%d", &num);
    }

    printf("\nGreatest: %d\nSmallest: %d\n", greatest, smallest);

    return 0;
}
