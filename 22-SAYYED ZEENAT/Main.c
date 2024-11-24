/*
Roll No. : 22
Student Name: SAYYED ZEENAT
Program Title: WAP to calculate Simple Interest taking principal, rate of interest and number of years as input from the user.

Task Given By:
  - Roll No. of Assignee: 31
  - Assignee Name: SAARA ANSARI
  */
  
  #Include<stdio.h>

void main(){

 float P, R, T, SI;
 printf("Enter Your Principal Amount:");
 scanf("%f", &P);

 printf("Enter Your rate of Interest:");
 scanf("%f", &R);

 printf("Enter time in years:");
 scanf("%f", &T);

 SI = (P*R*T)/ 100;
 printf("Simple Interest = %2f\n",SI);


 return 0;
}

/*OUTPUT:

Enter Your Principal Amount:20000
Enter Your rate of Interest:2
Enter time in years:4
Simple Interest = 1600.000000 */

