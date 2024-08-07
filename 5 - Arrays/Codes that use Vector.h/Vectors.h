#include <stdlib.h>

// Functions to display arrays:
void showIntegerArray(int array[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

void showIntegerArrayWithTab(int array[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
}

void showFloatArray(float array[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%.1f ", array[i]);
    }
}

void showFloatArrayWithTab(float array[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%.1f\t", array[i]);
    }
}

void showCharArrayWithNewlines(char array[], int size, int n)
{
    int i, count = 0;

    for (i = 0; i < size; i++)
    {
        if (count < (n - 1) && i < size)
        {
            printf("%c ", array[i]);
            count++;
        }
        else if (count == (n - 1))
        {
            printf("%c\n", array[i]);
            count = 0;
        }
    }
}

void showMultiplicationTableArray(int array[], int size)
{
    int i, j;

    for (i = 0; i < size; i++)
    {
        printf("\n\n=== %d TIMES TABLE ===\n", array[i]);
        for (j = 0; j <= 10; j++)
        {
            printf("%d * %d = %d\n", array[i], j, array[i] * j);
        }
    }
}

// Functions to generate arrays:
void generateRandomIntegerArrayFrom0ToLimit(int array[], int size, int limit)
{
    int i;

    srand(time(NULL));

    for (i = 0; i < size; i++)
    {
        array[i] = rand() % (limit + 1);
    }
}

void generateRandomIntegerArrayFrom1ToLimit(int array[], int size, int limit)
{
    int i;

    srand(time(NULL));

    for (i = 0; i < size; i++)
    {
        array[i] = 1 + rand() % (limit);
    }
}

void generateIntegerArrayWithRange(int array[], int size, int lowerLimit, int upperLimit)
{
    int i;

    for (i = 0; i <= size; i++)
    {
        array[i] = (rand() % ((upperLimit - lowerLimit) + 1)) + lowerLimit;
    }
}

void generateFloatArrayFrom0To1(float array[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        array[i] = (float)(rand()) / RAND_MAX;
    }
}

void generateFloatArrayFrom0To100(float array[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        array[i] = ((float)(rand()) / RAND_MAX) * 100;
    }
}

void generateLowerCaseCharArray(char array[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        array[i] = rand() % 26 + 97;
    }
}

void generateUpperCaseCharArray(char array[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        array[i] = rand() % 26 + 65;
    }
}

void generatePositiveNegativeIntegerArray(int array[], int size, int negativeLimit, int positiveLimit)
{
    int i;

    for (i = 0; i < size; i++)
    {
        array[i] = rand() % (positiveLimit + negativeLimit + 1) - negativeLimit;
    }
}

void generateArrayWithoutRepetition(int array[], int size, int limit)
{
    int i, j;

    srand(time(NULL));

    for (i = 0; i < size; i++)
    {
        array[i] = rand() % limit + 1;

        for (j = 0; j < i; j++)
        {
            if (array[i] == array[j])
            {
                i--; // Decrements i to generate a new value for that index.
                break;
            }
        }
    }
}

// Function to sort an integer array:
void sortIntegerArray(int array[], int size)
{
    int i, j, aux;

    for (i = size - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (array[j] > array[j + 1])
            {
                aux = array[j];
                array[j] = array[j + 1];
                array[j + 1] = aux;
            }
        }
    }
}

// Function to sum elements of a float array:
float sumFloatArray(float array[], int size)
{
    int i;
    float sum = 0;

    for (i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }

    return sum;
}

// Function to find the most frequent number in an array:
int mostFrequent(int array[], int size)
{
    int mostFrequent, i, j, frequency, maxFrequency = 0;

    mostFrequent = array[0];

    for (i = 0; i < size; i++)
    {
        frequency = 0;

        for (j = i; j < size; j++)
        {
              if (array[i] == array [j])
            {
                frequency++;
            }

        }

        if (frequency > maxFrequency)
        {
            maxFrequency = frequency;
            mostFrequent = array[i];
        }
    }
    return mostFrequent;
}

// Function to check if a number repeats in the array:
int checkIfNumberRepeatsInArray(int array[], int size, int value)
{
    int i, count = 0;

    for (i = 0; i < size; i++)
    {
        if (value == array[i])
        {
            count++;
        }
    }

    // If count > 0, it repeats.
    return count;
}
