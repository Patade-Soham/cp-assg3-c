 /*
  Roll No.: 31
  Student Name: SAARA ANSARI
  Program Title: WAP TO PRINT THE MULTIPLICATION OF TWO NUMBERS

  Task Given By:
    - Roll No. of Assignee: 22
    - Assignee Name: ZEENAT SAYYED
*/

#include<stdio.h>

int main(){

 int a[10][10], b[10][10], result[10][10];
 int rows, cols;
 int i,j,k;

  printf("Enter number of rows:\n");
  scanf("%d", &rows);

  printf("Enter number of columns:\n");
  scanf("%d", &cols);

  printf("Enter first matrix elements:\n");
  for(i = 0; i<rows; i++){
    for(j = 0; j < cols; j++){
       scanf("%d",&a[i][j]);
  }
 }
  printf("Enter second matrix elements:\n");
  for(i = 0; i < rows ; i++){
    for(j = 0;j < cols ; j++){
       scanf("%d",&b[i][j]);
  }
 }
  printf("Multiplication of two matices:\n");
  for(i = 0; i < rows; i++){
    for(j = 0; j < cols; j++){
        result[i][j]=0;
        for (k = 0; k < cols; k++) {
            result[i][j] += a[i][k] * b[k][j];
    }
   }
  }
   printf("Resultant Matrix:\n");
  for (i = 0; i < rows; i++) {
    for (j = 0; j < cols; j++) {
        printf("%d ", result[i][j]);
    }
    printf("\n");
}
return 0;
}

/*OUTPUT:

Enter number of rows:
2
Enter number of columns:
2
Enter first matrix elements:
1 2 
3 4
Enter second matrix elements:
2 3 
4 1
Multiplication of two matices
Resultant Matrix:
10 5
22 13
*/
