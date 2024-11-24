
/*
  Roll No.:51
  Student Name:MOHD ZAID ANSARI
  Program Title:Temprature Unit Converter

  Task Given By:
    - Roll No. of Assignee:62
    - Assignee Name:LAJINA CHAUDHARY
*/

#include <stdio.h>
/*c=celsius
    f=fahrenheit
    k=kelvin*/
float cToF(float c) {
    return (c * 9 / 5) + 32;
}

float fToC(float f) {
    return (f - 32) * 5 / 9;
}

float cToK(float c) {
    return c + 273.15f;
}

float kToC(float k) {
    return k - 273.15f;
}

float kToF(float k) {
    return (k - 273.15f) * 9 / 5 + 32;
}

float fToK(float f) {
    return (f - 32) * 5 / 9 + 273.15f;
}

int main() {
    int fromUnit, toUnit;
    float inputTemp, convertedTemp;

    while (1) {
        printf("\t\t***Temprature Unit Converter***\n\n");
        printf("Temperature Units:\n");
        printf("1: Celsius\n");
        printf("2: Fahrenheit\n");
        printf("3: Kelvin\n");

        printf("Select the unit you want to convert from (1-3): ");
                scanf("%d", &fromUnit);

        if (fromUnit < 1 || fromUnit > 3) {
            printf("Please enter from option 1-3, try again :)\n\n");
            continue;
        }

        printf("Select the unit you want to convert to (1-3): ");
                scanf("%d", &toUnit);

        if (toUnit < 1 || toUnit > 3 || toUnit == fromUnit) {
            printf("Please enter from option 1-3, try again :)\n\n");
            continue;
        }

        printf("Enter the temperature to convert: ");
        scanf("%f", &inputTemp);

        if (fromUnit == 1 && toUnit == 2) {
            convertedTemp = cToF(inputTemp);
            printf("%.2f Celsius = %.2f Fahrenheit\n\n", inputTemp, convertedTemp);
        } else if (fromUnit == 1 && toUnit == 3) {
            convertedTemp = cToK(inputTemp);
            printf("%.2f Celsius = %.2f Kelvin\n\n", inputTemp, convertedTemp);
        } else if (fromUnit == 2 && toUnit == 1) {
            convertedTemp = fToC(inputTemp);
            printf("%.2f Fahrenheit = %.2f Celsius\n\n", inputTemp, convertedTemp);
        } else if (fromUnit == 2 && toUnit == 3) {
            convertedTemp = fToK(inputTemp);
            printf("%.2f Fahrenheit = %.2f Kelvin\n\n", inputTemp, convertedTemp);
        } else if (fromUnit == 3 && toUnit == 1) {
            convertedTemp = kToC(inputTemp);
            printf("%.2f Kelvin = %.2f Celsius\n\n", inputTemp, convertedTemp);
        } else if (fromUnit == 3 && toUnit == 2) {
            convertedTemp = kToF(inputTemp);
            printf("%.2f Kelvin = %.2f Fahrenheit\n\n", inputTemp, convertedTemp);
        }

        char choice;
            printf("Do you want to convert another temperature? (y/n): ");
            scanf(" %c", &choice);
                if (choice == 'n' || choice == 'N') {
                printf("Thanks for using <3\n");
        break;
        }
    }

    return 0;
}
