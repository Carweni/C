/*This program generates a list of random integers, sorts them, identifies repeated numbers, and lists numbers that are not repeated.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int i, j, copy, count, size = 15, list[size];
    srand(time(NULL));
    
    // Generate random values
    for(i = 0; i < size; i++) 
    {
        list[i] = rand() % 20 + 1;
    }

    // Sort the array
    for(i = 0; i < size; i++) 
    {
        for(j = 0; j < size; j++)
        {
            if(list[i] < list[j])
            {
                copy = list[i];
                list[i] = list[j];
                list[j] = copy;
            }
        }
    }

    // Print the sorted array
    printf("\n=== VECTOR ===\n");
    for(i = 0; i < size; i++) 
    {
        printf("%d ", list[i]);
    }

    // Print repeated numbers
    printf("\n\n=== REPEATED ===\n");
    j = 1;
    for(i = 0; i < size; i++)
    {
        while(list[i] == list[j])
        {
            i++;
            j++;
            if(list[i] != list[j])
            {
                printf("%d ", list[i]);
            }
        }
        j++;
    }

    // Print non-repeated numbers
    printf("\n\n=== NOT REPEATED ===\n");
    int counter = 0, vet[counter], checker;

    for(i = 0; i < size; i++)
    {
        if((list[i] == list[i + 1]) && (i < size - 1))
        {
            checker = list[i];
        }

        if(list[i] != checker)
        {
            vet[counter++] = list[i];
        }
    }

    for(i = 0; i < counter; i++)
    {
        printf("%d ", vet[i]);
    }

    return 0;
}
