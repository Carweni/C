/*This algorithm reads three integer values that represent the sides of a triangle and determines if these values can
form a triangle (note: for it to be a triangle, each side must be smaller than the sum of the other two sides).
If it is a triangle, it determines its type: equilateral (all sides equal), isosceles (two sides equal), and
scalene (all sides different).*/

#include <stdio.h>

int main(void){
    int side1, side2, side3;

    printf("Enter the first side: ");
    scanf("%d", &side1);
    printf("Enter the second side: ");
    scanf("%d", &side2);
    printf("Enter the third side: ");
    scanf("%d", &side3);

    if (side1 < (side2 + side3) && side2 < (side1 + side3) && side3 < (side2 + side1))
    {
        printf("These values can form a triangle.");

        if (side1 == side2 && side1 == side3)
        {
            printf(" It is an equilateral triangle.");
        }
        else if (side1 != side2 && side1 != side3)
        {
            printf(" It is a scalene triangle.");
        }
        else
        {
            printf(" It is an isosceles triangle.");
        }
    }
    else
    {
        printf("These values cannot form a triangle.");
    }

    return 0;
}
