/* This program asks from the user the size of an array to be generated randomly and the maximum number it will attain.
   Then, it will print the generate array, find its smallest number and calculate the average of even numbers.*/ 

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "Vectors.h"

int main(void)
{
    int size, n, number, smallest = 9999999, index_of_smallest = 0, sum = 0, count = 0;
    float average;
    char response;

    do
    {
        sum = 0;
        count = 0;
        do
        {
            printf("Enter the size of the array: ");
            scanf("%d", &size);
        } while (size <= 0);

        int array[size];

        do
        {
            printf("Enter the value of n (maximum limit for random number): ");
            scanf("%d", &n);
        } while (n <= 0);

        generateRandomIntegerArrayFrom0ToLimit(array, size, n);
        printf("\n=== GENERATED ARRAY ===\n");
        showIntegerArray(array, size);

        for (int i = 0; i < size; i++)
        {
            if (array[i] < smallest)
            {
                smallest = array[i];
                index_of_smallest = i;
            }

            if (array[i] % 2 == 0)
            {
                sum += array[i];
                count++;
            }
        }

        printf("\n\nThe smallest value is %d and it is at index %d.", smallest, index_of_smallest);

        if (count > 0)
        {
            average = (float)sum / count;
            printf("\n\nAverage of even numbers: %.2f", average);
        }

        setbuf(stdin, NULL);
        printf("\nDo you want to continue in the program (Y/y)? ");
        scanf(" %c", &response);
        response = toupper(response);
    } while (response == 'Y');

    return 0;
}
