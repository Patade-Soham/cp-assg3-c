/*
  Roll No.: 35
  Student Name: Shaikh Subhana Salim 
  Program Title: WAP to read weekday number and print weekday name using switch.

  Task Given By:
    - Roll No. of Assignee: 42
    - Assignee Name: Ansari Adeena 
*/

#include <stdio.h>

int main() {
    int day;

    // Ask the user to enter a weekday number between 1 and 7
    printf("Enter a weekday number (1-7): ");
    scanf("%d", &day);

    // Use a switch statement to determine the weekday name
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("INVALID NUMBER, PLEASE ENTER FROM BETWEEN 1 TO 7\n");
            break;
    }

    return 0;
}

/*
                 OUTPUT 

Enter a weekday number (1-7): 5
Friday


=== Code Execution Successful ===

*/