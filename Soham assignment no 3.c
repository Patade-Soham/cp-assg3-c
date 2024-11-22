    
#include <stdio.h>

#define PI 3.147

int main() {
    
    double radius;
    
    
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    
    
    double perimeter = 2 * PI * radius;
    double area = PI * radius * radius;
    
    
    printf("Perimeter (Circumference) of the circle: %.2f\n", perimeter);
    printf("Area of the circle: %.2f\n", area);
    
    return 0;
}

/*
  Roll No.:04
  Student Name:soham patade
  Program title : wap to calculate perimeter and area of a circle with the help of constants.

  Task Given By:
    - Roll No. of Assignee: 03
    - Assignee Name: Utsav Gupta 
*/