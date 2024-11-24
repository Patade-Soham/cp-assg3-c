/*
  Roll No.: 43
  Student Name: Momin Mohammad Zeeshan Shahid
  Program Title: WAP to find area of circle and square using functions and switch.

  Task Given By:
    - Roll No. of Assignee: 23
    - Assignee Name: SHAIKH AYAAN MOHAMMAD SHAHID
*/

#include<stdio.h>

/* Function to calculate area of circle */
void CalcAreaOfCircle(){
    float area, r;
    printf("\n Enter the radius of circle : ");
    scanf("%f",&r);
    area = 2*3.14*r;
    printf(" Area of circle is          : %.2f",area);
}

/* Function to calculate area of square */
void CalcAreaOfSquare(){
    float area, y;
    printf("\n Enter the radius of square : ");
    scanf("%f",&y);
    area = y*y;
    printf(" Area of square is          : %.2f",area);
}

int main()
{
    int choice;
    printf("\t\t\t*** Area Finder ***\n\n");
    printf(" Enter \n");
    printf(" 1. to find area of circle \n");
    printf(" 2. to find area of square \n");
    printf(" Enter choice : ");
    scanf("%d",&choice);
    switch(choice)   // choosing operation
    {
        case 1:
            printf("\n\t\t*** Circle ***\n");
            CalcAreaOfCircle();  // Function call
            break;
        case 2:
            printf("\n\t\t*** Square ***\n");
            CalcAreaOfSquare();  // Function call
            break;
        default :
            printf("\n Enter valid choice");
            break;
    }
    printf("\n\n");
    return 0;
}

/*  OUTPUT
                        *** Area Finder ***

 Enter
 1. to find area of circle
 2. to find area of square
 Enter choice : 2

                *** Square ***

 Enter the radius of square : 3
 Area of square is          : 9.00


Process returned 0 (0x0)   execution time : 2.812 s
Press any key to continue. */