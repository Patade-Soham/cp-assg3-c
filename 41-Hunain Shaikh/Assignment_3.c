#include <stdio.h>
/*
  Roll No.: 41
  Student Name: Hunain Shaikh
  Program Title: WAP to read three values from the user and check if they are sides of a right angled triangle.

  Task Given By:
    - Roll No. of Assignee: 38
    - Assignee Name: Sharique Shaikh
*/
void printIfRightAngled(int, int, int);

int main(){
    int s1, s2, s3;
    printf("\t\t\t***Right Angle checker***\n");
        printf("Enter length of side 1 : ");    //reading inputs
            scanf(" %i", &s1);
        printf("Enter length of side 2 : ");
            scanf(" %i", &s2);
        printf("Enter length of side 3 : ");
            scanf(" %i", &s3);
        printIfRightAngled(s1, s2, s3);
    return 0;
}

void printIfRightAngled(int s1, int s2, int s3){
    if((s1*s1) + (s2*s2) == (s3*s3) || (s1*s1) + (s3*s3) == (s2*s2) || (s3*s3) + (s2*s2) == (s1*s1) ){ //verifies sides using Pythagoras Theorem
        printf("\nThese are sides of a Right Angled Triangle.");
    }
    else{
        printf("\nThese are NOT sides of a Right Angled Triangle.");
    }
}
/*
                                ---Output---
                        ***Right Angle checker***
Enter length of side 1 : 3
Enter length of side 2 : 4
Enter length of side 3 : 5

These are sides of a Right Angled Triangle.
*/