/*
  Roll No.: 61
  Student Name: Saksham jha
  Program Title: WAP to print Fibonacci series till number entered by the user.
  Task Given By:
    - Roll No. of Assignee: 46
    - Assignee Name: Arhaan Mulla
*/

#include <stdio.h>
int main() {

  int i, n;

  // initialize first and second terms
  int t1 = 0, t2 = 1;

  // initialize the next term (3rd term)
  int nextTerm = t1 + t2;

  // get no. of terms from user
  printf("Enter the number of terms: \n");
  scanf("%d", &n);

  // print the first two terms t1 and t2
  printf("Fibonacci Series: %d %d ", t1, t2);

  // print 3rd to nth terms
  for (i = 3; i <= n; i++) {
    printf("%d ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  printf("\n\n");

  return 0;
}
