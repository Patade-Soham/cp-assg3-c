


/*
  Roll No.: 16
  Student Name: SOHAN CHOUDHARY
  Program Title: WAP to store and display details of students including their name, age, and marks in 6 subjects.

  Task Given By:
    - Roll No. of Assignee: 19
    - Assignee Name: Shaikh Alkaish Husain
*/

#include<stdio.h>


   struct student{
   char name[30];
   int age;
   int marks[6];
   };


  int main()
  {
  int n;

  printf("ENTER NO. OF STUDENTS\n");
  scanf("%d",&n);

  struct student student[n];

  for(int i=0;i<n;i++)
  {
  printf("ENTER DATA OF STUDENTS NO. %d  \n",i+1);

  getchar();

  printf("ENTER STUDENT NAME :",&student[i].name);
  gets(student[i].name);

  printf("ENTER STUDENT AGE : \n");
  scanf("%d",&student[i].age);

  printf("ENTER MARKS OF STUDENT FOR 6 subjects : \n");
  for(int j=0;j<6;j++)
  {
  scanf("%d", &student[i].marks[j]);
  }
    }
     printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d Details:\n", i + 1);
        printf("Name: %s\n", student[i].name);
        printf("Age: %d\n", student[i].age);
        printf("Marks: ");
        for (int j = 0; j < 5; j++) {
            printf("%d ", student[i].marks[j]);  // 1D marks array for each student
        }
        printf("\n");
    }

    return 0;
    }

    /*
        ENTER NO. OF STUDENTS
 3
 ENTER DATA OF STUDENTS NO. 1
 ENTER STUDENT NAME :ALKAISH HUSAIN
 ENTER STUDENT AGE :
 18
 ENTER MARKS OF STUDENT FOR 6 subjects :
 10
 10
 10
 10
 10
 10
 ENTER DATA OF STUDENTS NO. 2
 ENTER STUDENT NAME :HARSH TIKLE
 ENTER STUDENT AGE :
 18
 ENTER MARKS OF STUDENT FOR 6 subjects :
 20
 20
 20
 30
 30
 30
 ENTER DATA OF STUDENTS NO. 3
 ENTER STUDENT NAME :SOHAN CHOUDHARY
 ENTER STUDENT AGE :
 18
 ENTER MARKS OF STUDENT FOR 6 subjects :
 70
 70
 70
 70
 70
 70

 Student Details:

 Student 1 Details:
 Name: ALKAISH HUSAIN
 Age: 18
 Marks: 10 10 10 10 10

 Student 2 Details:
 Name: HARSH TIKLE
 Age: 18
 Marks: 20 20 20 30 30

 Student 3 Details:
 Name: SOHAN CHOUDHARY
 Age: 18
 Marks: 70 70 70 70 70

 Process returned 0 (0x0)   execution time : 180.426 s
 Press any key to continue.
    */




