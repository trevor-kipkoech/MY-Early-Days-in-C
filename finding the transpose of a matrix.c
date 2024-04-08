#include<stdio.h>
int  main()
{
    // transpose of a matrix allows for interswitching the rows to columns and columns into rows
   // #include <stdio.h>

void transpose(int matrix[10][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

void printMatrix(int matrix[10][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}

int main() {
    int matrix[10][10] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 3;
    printf("Original Matrix:\n");
    printMatrix(matrix, n);
    transpose(matrix, n);
    printf("\nTransposed Matrix:\n");
    printMatrix(matrix, n);
    return 0;
}
}