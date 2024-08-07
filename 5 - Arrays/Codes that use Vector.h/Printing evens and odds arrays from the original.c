#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "Vectors.h"

int main(void)
{
    int vector1[15], size1 = 15, limit1 = 25, i, vector2[size1], vector3[size1], count2 = 0, count3 = 0;
    char response;

    do
    {
        count2 = 0;
        count3 = 0;

        printf("===Vector===\n");
        generateRandomIntegerArrayFrom1ToLimit(vector1, size1, limit1);
        showIntegerArray(vector1, size1);

        printf("\n===Even Vector===\n");

        for (i = 0; i < size1; i++)
        {
            if (vector1[i] % 2 == 0)
            {
                vector2[count2++] = vector1[i];
            }
        }

        for (i = 0; i < size1; i++)
        {
            if (vector1[i] % 2 != 0)
            {
                vector3[count3++] = vector1[i];
            }
        }

        for (i = 0; i < count2; i++)
        {
            printf("%d\t", vector2[i]);
        }

        printf("\n\n===Odd Vector===\n");

        for (i = 0; i < count3; i++)
        {
            printf("%d\t", vector3[i]);
        }

        setbuf(stdin, NULL);
        printf("\n\nDo you want to continue the program (Y/y)? ");
        scanf("%c", &response);
        response = toupper(response);
        printf("\n");
    } while (response == 'Y');

    return 0;
}
