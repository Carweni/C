/*
    This program generates two vectors, A and B, containing random integer values. Vector A has elements between 1 and 20,
    and vector B has elements between 1 and 15. The user specifies the number of elements for each vector, ensuring positive sizes.
    The program compares elements of vectors A and B, and creates a new vector C based on the following conditions:
    - Each element of C is 1 if the corresponding element of A is greater than that of B.
    - Each element of C is 0 if the corresponding element of A is equal to that of B.
    - Each element of C is -1 if the corresponding element of A is less than that of B.
    The program then displays the elements of vectors A, B, and C.
*/

#include <stdio.h>
#include "Vectors.h"

int main(void) {
    char resp;
    int sizeA, sizeB, limitA = 20, limitB = 15, i, sizeC = 0;

    do {
        sizeC = 0;

        // Get the size of vector A
        do {
            printf("Enter the size of vector A: ");
            scanf("%d", &sizeA);
        } while (sizeA <= 0);

        // Get the size of vector B
        do {
            printf("Enter the size of vector B: ");
            scanf("%d", &sizeB);
        } while (sizeB <= 0);

        int vectorA[sizeA], vectorB[sizeB];

        // Generate random integers for vectors A and B
        generateRandomIntegerArrayFrom1ToLimit(vectorA, sizeA, limitA);
        generateRandomIntegerArrayFrom1ToLimit(vectorB, sizeB, limitB);

        // Display vector A
        printf("\n=== VECTOR A ===\n");
        showIntegerArray(vectorA, sizeA);

        // Display vector B
        printf("\n=== VECTOR B ===\n");
        showIntegerArray(vectorB, sizeB);

        printf("\n=== VECTOR C ===\n");

        if (sizeA >= sizeB) {
            int vectorC[sizeA];

            // Extend vector B with zeros if sizeA is greater than sizeB
            for (i = 0; i < sizeA; i++) {
                if (i >= sizeB) {
                    vectorB[sizeB++] = 0;
                }
            }

            // Compare elements of vectors A and B and populate vector C
            for (i = 0; i < sizeA; i++) {
                if (vectorA[i] > vectorB[i]) {
                    vectorC[sizeC++] = 1;
                } else if (vectorA[i] < vectorB[i]) {
                    vectorC[sizeC++] = -1;
                } else if (vectorA[i] == vectorB[i]) {
                    vectorC[sizeC++] = 0;
                }
            }

            // Display vector C
            for (i = 0; i < sizeC; i++) {
                printf("%d ", vectorC[i]);
            }
        }else if (sizeA < sizeB){
            int vectorC[sizeB];

            // Extend vector A with zeros if sizeB is greater than sizeA
            for (i = 0; i < sizeB; i++) {
                if (i >= sizeA) {
                    vectorA[sizeA++] = 0;
                }
            }

            // Compare elements of vectors A and B and populate vector C
            for (i = 0; i < sizeB; i++) {
                if (vectorA[i] > vectorB[i]) {
                    vectorC[sizeC++] = 1;
                } else if (vectorA[i] < vectorB[i]) {
                    vectorC[sizeC++] = -1;
                } else if (vectorA[i] == vectorB[i]) {
                    vectorC[sizeC++] = 0;
                }
            }

            // Display vector C
            for (i = 0; i < sizeC; i++) {
                printf("%d ", vectorC[i]);
            }
        }

        setbuf(stdin, NULL);
        printf("\n\nDo you want to continue the program (Y/y)? ");
        scanf(" %c", &resp);
        resp = toupper(resp);
        printf("\n");
    } while (resp == 'Y');

    return 0;
}
