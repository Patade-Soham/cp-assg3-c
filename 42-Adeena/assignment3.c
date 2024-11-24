/*
  Roll No.:42
  Student Name: Ansari Adeena Maqsood Alam
  Program Title:WAP to find the body mass index of the users.

  Task Given By:
    - Roll No. of Assignee:35
    - Assignee Name: Shaikh Subhana
*/

#include <stdio.h>

int main() {
    float height, weight, bmi;

    printf("\t\t***BMI FINDER***\n\n");

    // take input from users
    printf("Enter your height in meters: ");
    scanf("%f", &height);
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    // Calculate BMI
    bmi = weight / (height * height);

    // Display BMI
    printf("Your BMI is: %.2f\n", bmi);

    // using if-else if ladder
    if (bmi < 18.5) {
        printf("You are Underweight.\n");
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("You have Normal weight.\n");
    } else if (bmi >= 25 && bmi <= 29.9){
        printf("You are Overweight.\n");
    } else if (bmi>=30){
        printf("You are Obese.\n");
    } else{
        printf("error");
    }

    return 0;
}
/* output
                ***BMI FINDER***

Enter your height in meters: 1.75
Enter your weight in kilograms: 70
Your BMI is: 22.86
You have Normal weight.
*/
