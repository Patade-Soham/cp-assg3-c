/*
  Roll No:- 33
  Student Name:- Shaikh Mohammed Hasnain Jaffer 
  Program Title:-WAP to multiply the two matrix
    
 Task Given By:
    - Roll No. of Assignee:21
    - Assignee Name: Adil sayyed
*/


#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    int mat1[m][n], mat2[p][q], result[m][q];
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", &mat2[i][j]);

    
    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++)
            result[i][j] = 0;

    
    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++)
            for (k = 0; k < n; k++)
                result[i][j] += mat1[i][k] * mat2[k][j];

    printf("Resultant matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}