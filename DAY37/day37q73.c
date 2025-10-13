#include <stdio.h>

int main() {
    int matrix[10][10], rowSums[10];
    int rows, cols, i, j;

   
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);


    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for(i = 0; i < rows; i++) {
        rowSums[i] = 0;  
        for(j = 0; j < cols; j++) {
            rowSums[i] += matrix[i][j];
        }
    }

  
    printf("Sum of each row:\n");
    for(i = 0; i < rows; i++) {
        printf("Row %d sum: %d\n", i + 1, rowSums[i]);
    }

    return 0;
}
