#include <stdio.h>
#include <stdlib.h>

// Function to perform Boolean matrix multiplication
void boolean_matrix_multiplication(int l1, int l2, int c1, int c2, int a[l1][c1], int b[l2][c2]) {
    int i, j, k, l, v;
    int result[l1][c2];

    for (i = 0; i < l1; i++) {
        for (j = 0; j < c2; j++) {
            k = 0;
            l = 0;
            v = 0;
            while (k < c1 && l < l2) {
                if (a[i][k] == 1 && b[l][j] == 1) {
                    result[i][j] = 1;
                    v = 1;
                    break;
                }
                k++;
                l++;
            }

            if (!v) {
                result[i][j] = 0;
            }
        }
    }

    printf("Resulting Matrix (A ⊙ B):\n");
    for (i = 0; i < l1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int i, j, l1, l2, c1, c2, aux;

    // Input dimensions with validation
    do {
        printf("Enter the number of rows of matrix A (2 to 4): ");
        scanf("%d", &l1);
    } while (l1 < 2 || l1 > 4);

    do {
        printf("Enter the number of columns of matrix A (2 to 4): ");
        scanf("%d", &c1);
    } while (c1 < 2 || c1 > 4);

    do {
        printf("Enter the number of rows of matrix B (2 to 4): ");
        scanf("%d", &l2);
    } while (l2 < 2 || l2 > 4);

    do {
        printf("Enter the number of columns of matrix B (2 to 4): ");
        scanf("%d", &c2);
    } while (c2 < 2 || c2 > 4);

    // Validate matrix multiplication condition
    while (c1 != l2) {
        printf("\nMatrix multiplication not possible. Number of columns in A must equal number of rows in B.\nPlease enter the dimensions again.\n\n");

        do {
            printf("Enter the number of rows of matrix A (2 to 4): ");
            scanf("%d", &l1);
        } while (l1 < 2 || l1 > 4);

        do {
            printf("Enter the number of columns of matrix A (2 to 4): ");
            scanf("%d", &c1);
        } while (c1 < 2 || c1 > 4);

        do {
            printf("Enter the number of rows of matrix B (2 to 4): ");
            scanf("%d", &l2);
        } while (l2 < 2 || l2 > 4);

        do {
            printf("Enter the number of columns of matrix B (2 to 4): ");
            scanf("%d", &c2);
        } while (c2 < 2 || c2 > 4);
    }

    int mat1[l1][c1];
    int mat2[l2][c2];

    // Input Matrix A
    printf("\nEnter the elements of Matrix A (only 0 or 1):\n");
    for (i = 0; i < l1; i++) {
        for (j = 0; j < c1; j++) {
            do {
                scanf("%d", &aux);
                if (aux == 0 || aux == 1) {
                    mat1[i][j] = aux;
                    break;
                } else {
                    printf("Boolean matrices only accept 0 or 1. Try again: ");
                }
            } while (1);
        }
    }

    // Print Matrix A
    printf("\nMatrix A:\n");
    for (i = 0; i < l1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    // Input Matrix B
    printf("\nEnter the elements of Matrix B (only 0 or 1):\n");
    for (i = 0; i < l2; i++) {
        for (j = 0; j < c2; j++) {
            do {
                scanf("%d", &aux);
                if (aux == 0 || aux == 1) {
                    mat2[i][j] = aux;
                    break;
                } else {
                    printf("Boolean matrices only accept 0 or 1. Try again: ");
                }
            } while (1);
        }
    }

    // Print Matrix B
    printf("\nMatrix B:\n");
    for (i = 0; i < l2; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Perform Boolean multiplication
    boolean_matrix_multiplication(l1, l2, c1, c2, mat1, mat2);

    return 0;
}
