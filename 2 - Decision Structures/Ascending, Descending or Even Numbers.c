/* This program takes four integer inputs (op, a, b, and c) and implements a menu with three options.
   The options include displaying the numbers a, b and c in ascending order, descending order, or checking if they are multiples of 2.*/

#include <stdio.h>

int main(void)
{
    int a, b, c, op;

    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);
    printf("Enter the third integer: ");
    scanf("%d", &c);

    printf("\nMenu options: \n1 - Display numbers in ascending order. \n2 - Display numbers in descending order. \n3 - Display numbers that are multiples of 2. \n");
    printf("\nEnter the desired option: \n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        {
            if (a < b && a < c && b < c)
            {
                printf("%d, %d, %d", a, b, c);
                break;
            }
            else if (a < c && a < b && c < b)
            {
                printf("%d, %d, %d", a, c, b);
                break;
            }
            else if (b < a && b < c && a < c)
            {
                printf("%d, %d, %d", b, a, c);
                break;
            }
            else if (b < a && b < c && c < a)
            {
                printf("%d, %d, %d", b, c, a);
                break;
            }
            else if (c < a && c < b && b < a)
            {
                printf("%d, %d, %d", c, b, a);
                break;
            }
            else
            {
                printf("%d, %d, %d", c, a, b);
                break;
            }
        }
    case 2:
        {
            if (a > b && a > c && b > c)
            {
                printf("%d, %d, %d", a, b, c);
                break;
            }
            if (a > b && a > c && c > b)
            {
                printf("%d, %d, %d", a, c, b);
                break;
            }
            if (b > a && b > c && a > c)
            {
                printf("%d, %d, %d", b, a, c);
                break;
            }
            if (b > a && b > c && c > a)
            {
                printf("%d, %d, %d", b, c, a);
                break;
            }
            if (c > a && c > b && b > a)
            {
                printf("%d, %d, %d", c, b, a);
                break;
            }
            else
            {
                printf("%d, %d, %d", c, a, b);
                break;
            }
        }
    case 3:
        {
            if (a % 2 == 0 && b % 2 == 0 && c % 2 == 0)
            {
                printf("The numbers %d, %d, and %d are multiples of 2. ", a, b, c);
                break;
            }
            else if (a % 2 != 0 && b % 2 == 0 && c % 2 == 0)
            {
                printf("Only the numbers %d and %d are multiples of 2. ", b, c);
                break;
            }
            else if (a % 2 == 0 && b % 2 != 0 && c % 2 == 0)
            {
                printf("Only the numbers %d and %d are multiples of 2. ", a, c);
                break;
            }
            else if (a % 2 == 0 && b % 2 == 0 && c % 2 != 0)
            {
                printf("Only the numbers %d and %d are multiples of 2. ", a, b);
                break;
            }
            else if (a % 2 == 0 && b % 2 != 0 && c % 2 != 0)
            {
                printf("Only the number %d is a multiple of 2. ", a);
                break;
            }
            else if (a % 2 != 0 && b % 2 == 0 && c % 2 != 0)
            {
                printf("Only the number %d is a multiple of 2. ", b);
                break;
            }
            else if (a % 2 != 0 && b % 2 != 0 && c % 2 == 0)
            {
                printf("Only the number %d is a multiple of 2. ", c);
                break;
            }
            else
                printf("None of these numbers are multiples of 2. ");
            break;
        }
    default:
        {
            printf("Invalid option. ");
        }
    }

    return 0;
}
