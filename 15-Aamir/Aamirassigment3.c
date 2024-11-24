/*
  Roll No.: 15
  Student Name: Mohammed Aamir Sameer Khan
  Program Title: WAP to create Body Mass Index calculator with feet and kg units for fitness of the user .

  Task Given By: 
    - Roll No. of Assignee: 33
    - Assignee Name: Maaz ansari
*/
#include <stdio.h>

// Function to calculate BMI using pointers
float calculateBMI(float *weight, float *height) {
    return *weight / (*height * *height); //  Bmi=   kg /m*m
} //                                                

// Function to determine BMI category
void bmiCategory(float *bmi) {
    if (*bmi < 18.5)
        printf("You are underweight.\n");
    else if (*bmi < 24.9)
        printf("You are in the normal weight range. Stay healthy!\n");
    else if (*bmi < 29.9)
        printf("You are overweight. Keep an eye on your health.\n");
    else
        printf("You are obese. Consider a healthier lifestyle.\n");
}

int main() {
    float myWeight, myHeight, myBMI;

    // User input using personal variable names
    printf("Welcome to the Aamir's BMI Calculator! Let's check your health.\n");
    printf("Enter your weight in  kg: ");
    scanf("%f", &myWeight);
    printf("Enter your height in feet: ");
    scanf("%f", &myHeight);
       myHeight=myHeight*0.3048; // for conerting it into meters 
    // Call the function and calculate BMI
    myBMI = calculateBMI(&myWeight, &myHeight);

    // Display BMI result
    printf("Your BMI is: %.2f\n", myBMI);

    // Determine and display BMI category
    bmiCategory(&myBMI);

    printf("Thank you for using this Aamir's BMI calculator. Stay fit!\n");

    return 0;
}
