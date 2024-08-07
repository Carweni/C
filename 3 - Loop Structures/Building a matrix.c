/*This code generates a square matrix of size n x n where the elements are filled
 based on their relationship to the row and column indices. Elements above the main
 diagonal (where row index is less than column index) are set to 1, elements below
 the main diagonal (where row index is greater than column index) are set to -1, 
 and the elements on the main diagonal are set to 0. The resulting matrix is then
 printed row by row.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, i, j;

    printf("Enter a number for the square matrix: ");
    scanf("%d", &n);
    printf("\n");

    int mat[n][n];

    // Fill in the matrix based on the relationship between row (i) and column (j) indices
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            // If row index is less than column index, set the element to 1
            if (i < j) {
                mat[i][j] = 1;
            }
            // If row index is greater than column index, set the element to -1
            else if (i > j) {
                mat[i][j] = -1;
            }
            // If row index equals column index, set the element to 0
            else {
                mat[i][j] = 0;
            }
        }
    }

    // Print the resulting matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
