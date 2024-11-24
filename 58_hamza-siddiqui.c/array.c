/*
  Roll No.:58
  Student Name:Mohd Hamza Siddiqui
  Program Title: matrix operation using 2d array

  Task Given By: 
    - Roll No. of Assignee:59
    - Assignee Name:Rehan Qureshi
*/
#include <stdio.h>
#define MAX 10  // Maximum size of the matrix

// Function to input a matrix
void inputMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int rows1, int cols1, int rows2, int cols2) {
    // Ensure that number of columns in first matrix is equal to number of rows in second matrix
    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible. The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return;
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}


int main() {
    int mat1[MAX][MAX], mat2[MAX][MAX], result[MAX][MAX];
    int rows1, cols1, rows2, cols2;
    int choice;

    // Input for matrix 1
    printf("Enter the number of rows and columns for Matrix 1: ");
    scanf("%d %d", &rows1, &cols1);
    inputMatrix(mat1, rows1, cols1);

    // Input for matrix 2
    printf("Enter the number of rows and columns for Matrix 2: ");
    scanf("%d %d", &rows2, &cols2);
    inputMatrix(mat2, rows2, cols2);

    // Menu for operations
    printf("\nChoose the operation to perform:\n");
    printf("1. Add matrices\n");
    printf("2. Subtract matrices\n");
    printf("3. Multiply matrices\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            if (rows1 == rows2 && cols1 == cols2) {
                addMatrices(mat1, mat2, result, rows1, cols1);
                printf("\nMatrix Addition Result:\n");
                displayMatrix(result, rows1, cols1);
            } else {
                printf("Matrix addition is not possible. Matrices must have the same dimensions.\n");
            }
            break;
        case 2:
            if (rows1 == rows2 && cols1 == cols2) {
                subtractMatrices(mat1, mat2, result, rows1, cols1);
                printf("\nMatrix Subtraction Result:\n");
                displayMatrix(result, rows1, cols1);
            } else {
                printf("Matrix subtraction is not possible. Matrices must have the same dimensions.\n");
            }
            break;
        case 3:
            multiplyMatrices(mat1, mat2, result, rows1, cols1, rows2, cols2);
            printf("\nMatrix Multiplication Result:\n");
            displayMatrix(result, rows1, cols2);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}


/*
output:
Enter the number of rows and columns for Matrix 1: 
2 2
Enter elements of the matrix:
Enter element [1][1]: 1
Enter element [1][2]: 2
Enter element [2][1]: 3
Enter element [2][2]: 4

Enter the number of rows and columns for Matrix 2: 
2 2
Enter elements of the matrix:
Enter element [1][1]: 5
Enter element [1][2]: 6
Enter element [2][1]: 7
Enter element [2][2]: 8

Choose the operation to perform:
1. Add matrices
2. Subtract matrices
3. Multiply matrices
Enter your choice: 1

Matrix Addition Result:
6       8
10      12



Enter the number of rows and columns for Matrix 1: 
2 2
Enter elements of the matrix:
Enter element [1][1]: 1
Enter element [1][2]: 2
Enter element [2][1]: 3
Enter element [2][2]: 4

Enter the number of rows and columns for Matrix 2: 
2 2
Enter elements of the matrix:
Enter element [1][1]: 5
Enter element [1][2]: 6
Enter element [2][1]: 7
Enter element [2][2]: 8

Choose the operation to perform:
1. Add matrices
2. Subtract matrices
3. Multiply matrices
Enter your choice: 2

Matrix Subtraction Result:
-4      -4
-4      -4



Enter the number of rows and columns for Matrix 1: 
2 2
Enter elements of the matrix:
Enter element [1][1]: 1
Enter element [1][2]: 2
Enter element [2][1]: 3
Enter element [2][2]: 4

Enter the number of rows and columns for Matrix 2: 
2 2
Enter elements of the matrix:
Enter element [1][1]: 5
Enter element [1][2]: 6
Enter element [2][1]: 7
Enter element [2][2]: 8

Choose the operation to perform:
1. Add matrices
2. Subtract matrices
3. Multiply matrices
Enter your choice: 3

Matrix Multiplication Result:
19      22
43      50
*/