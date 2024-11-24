#include <stdio.h>

#define PI 3.14159  

int main() {
    float radius, area, perimeter;

    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;         
    perimeter = 2 * PI * radius;         

    
    printf("Area of the circle: %.2f\n", area);
    printf("Perimeter of the circle: %.2f\n", perimeter);

    return 0;
}/*
  Roll No.:13
  Student Name:Reyaan Shaikh
  Program Title:WAP to calculate perimeter and area of a circle with the help of constants.

  Task Given By:
    - Roll No. of Assignee:09
    - Assignee Name:Khan Istiyaq
*/

