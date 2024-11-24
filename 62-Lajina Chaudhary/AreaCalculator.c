/*
  Roll No.:62
  Student Name:LAJINA CHAUDHARY
  Program Title:Area Calculator

  Task Given By:
    - Roll No. of Assignee:51
    - Assignee Name:MOHD ZAID ANSARI
*/

#include<stdio.h>

float sq(float side) {
    return side * side;
}

float rect(float length, float width) {
    return length * width;
}

float tri(float base, float height) {
    return 0.5f * base * height;
}

float circ(float radius) {
    return 3.14f * radius * radius;
}

float semiCirc(float radius) {
    return (3.14f * radius * radius) / 2;
}

float quartCirc(float radius) {
    return (3.14f * radius * radius) / 4;
}

int main() {
    int choice;
    float side, length, width, base, height, radius, area;

    printf("Choose a shape to calculate the area:\n");
    printf("1. Square\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("4. Circle\n");
    printf("5. Semi-circle\n");
    printf("6. Quarter-circle\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the side length of the square: ");
            scanf("%f", &side);
            area = sq(side);
            printf("Area of the square: %.2f\n", area);
            break;

        case 2:
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);
            area = rect(length, width);
            printf("Area of the rectangle: %.2f\n", area);
            break;

        case 3:
            printf("Enter the base of the triangle: ");
            scanf("%f", &base);
            printf("Enter the height of the triangle: ");
            scanf("%f", &height);
            area = tri(base, height);
            printf("Area of the triangle: %.2f\n", area);
            break;

        case 4:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = circ(radius);
            printf("Area of the circle: %.2f\n", area);
            break;

        case 5:
            printf("Enter the radius of the semi-circle: ");
            scanf("%f", &radius);
            area = semiCirc(radius);
            printf("Area of the semi-circle: %.2f\n", area);
            break;

        case 6:
            printf("Enter the radius of the quarter-circle: ");
            scanf("%f", &radius);
            area = quartCirc(radius);
            printf("Area of the quarter-circle: %.2f\n", area);
            break;

        default:
            printf("Invalid choice. Please try again.\n");
            break;
    }

    return 0;
}
