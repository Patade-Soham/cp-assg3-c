/*
  Roll No.:29
  Student Name:SAYED AYAAN AYAZ
  Program Title: FIND TRANSPOSE OF MATRIX

  Task Given By: AAMIN PATHAN
    - Roll No. of Assignee: 25
    - Assignee Name: AAMIN PATHAN
*/


#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // Input rows and columns
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[3][3], transpose[3][2];

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate transpose
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print transpose
    printf("Transpose of the matrix:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
