#include <stdio.h>

int main() {
    int matrix1[10][10], matrix2[10][10], product[10][10];
    int rows1, cols1, rows2, cols2;
    int i, j, k;

    // Input size of first matrix
    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    // Input size of second matrix
    printf("Enter number of rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    // Check if multiplication is possible
    if(cols1 != rows2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    // Read first matrix
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Read second matrix
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows2; i++) {
        for(j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize product matrix to 0
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols2; j++) {
            product[i][j] = 0;
        }
    }

    // Multiply matrices
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols2; j++) {
            for(k = 0; k < cols1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the product matrix
    printf("Product of the two matrices:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
