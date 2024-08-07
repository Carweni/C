/*This program reads three numbers representing the sides of a triangle, organizes them in descending order, 
  and then determines the type of triangle based on the given conditions. */

#include <stdio.h>

int main(void)
{
    int num1, num2, num3, largest, middle, smallest;

    printf("Enter the first side: ");
    scanf("%d", &num1);
    printf("Enter the second side: ");
    scanf("%d", &num2);
    printf("Enter the third side: ");
    scanf("%d", &num3);

    // Sorting the sides in descending order:
    // Largest:
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

    // Middle:
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

    // Smallest:
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

    // Equality:
    if (num1 == num2 && num1 == num3)
    {
        largest = num1;
        middle = num2;
        smallest = num3;
    }
    else if (num1 == num2 && num1 != num3)
    {
        if (num3 > num1 && num3 > num2)
        {
            largest = num3;
            smallest = num2;
            middle = num1;
        }
        else
        {
            largest = num1;
            middle = num2;
            smallest = num3;
        }
    }
    else if (num1 == num3 && num1 != num2)
    {
        if (num2 > num1 && num2 > num3)
        {
            largest = num2;
            smallest = num3;
            middle = num1;
        }
        else
        {
            largest = num1;
            middle = num3;
            smallest = num2;
        }
    }
    else if (num3 == num2 && num1 != num3)
    {
        if (num1 > num3 && num1 > num2)
        {
            largest = num1;
            smallest = num2;
            middle = num3;
        }
        else
        {
            largest = num3;
            middle = num2;
            smallest = num1;
        }
    }

    // Printing in descending order:
    printf("Descending order: %d  %d  %d\n", largest, middle, smallest);

    // Triangle verification:
    
    // Angles:
    if (largest >= (middle + smallest))
    {
        printf("Does not form a triangle. \n");
    }
    else if ((largest * largest) == (middle * middle + smallest * smallest))
    {
        printf("Right-angled triangle. \n");
    }
    else if ((largest * largest) > (middle * middle + smallest * smallest))
    {
        printf("Obtuse-angled triangle. \n");
    }
    else if ((largest * largest) < (middle * middle + smallest * smallest))
    {
        printf("Acute-angled triangle. \n");
    }

    // Sides:
    if (largest >= (middle + smallest))
    {
        printf("");
    }
    else if (largest == middle && largest == smallest)
    {
        printf("Equilateral triangle. \n");
    }
    else if ((largest == middle && largest != smallest) || (middle == smallest && middle != largest))
    {
        printf("Isosceles triangle. \n");
    }
    else
    {
        printf("Scalene triangle. \n");
    }

    return 0;
}
