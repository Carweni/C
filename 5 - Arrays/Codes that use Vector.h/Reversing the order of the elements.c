/*
    This program generates a vector `A` containing 10 random integers between 1 and 10.
    It then creates another vector `B` of the same size, containing the elements of `A`
    but in reverse order. The first element of `A` becomes the last element of `B`,
    the second element of `A` becomes the second-to-last element of `B`, and so on.
*/

#include <stdio.h>
#include "Vectors.h"

int main(void) {
    char resp;
    int sizeA = 10, limit = 10, vectorA[sizeA], i, vectorB[sizeA], j, sizeB = 0;

    do {
        sizeB = 0;
        // Generate random integers in vectorA
        generateRandomIntegerArrayFrom1ToLimit(vectorA, sizeA, limit);

        // Display vectorA
        printf("=== VECTOR A ===\n");
        showIntegerArray(vectorA, sizeA);

        // Fill vectorB with elements of vectorA in reverse order
        for (i = (sizeA - 1); i >= 0; i--) {
            vectorB[sizeB++] = vectorA[i];
        }

        // Display vectorB
        printf("\n\n=== VECTOR B ===\n");
        for (j = 0; j < sizeB; j++) {
            printf("%d ", vectorB[j]);
        }

        setbuf(stdin, NULL);
        printf("\nDo you want to continue the program (Y/y)? ");
        scanf("%c", &resp);
        resp = toupper(resp);
        printf("\n");
    } while (resp == 'Y');

    return 0;
}
