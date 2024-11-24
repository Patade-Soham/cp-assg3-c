/*roll no: 26
Name: Choudhary Mohd Kaif
program title: time converter (from seconds to minutes and hours and vice versa)

task given by: my friend
roll no of assignee: 26
name of assignee: Chaudhary Mohd Yasir
*/


#include <stdio.h>


void convertFromSeconds(int seconds);
void convertFromMinutes(int minutes);
void convertFromHours(int hours);
int convertToSeconds(int hours, int minutes, int seconds);

int main() {
    int choice, timeInput, hours, minutes, seconds;

    printf("Time Conversion\n");
    printf("1. Convert seconds to minutes and hours\n");
    printf("2. Convert minutes to seconds and hours\n");
    printf("3. Convert hours to minutes and seconds\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter time in seconds: ");
            scanf("%d", &timeInput);
            convertFromSeconds(timeInput);
            break;
        case 2:
            printf("Enter time in minutes: ");
            scanf("%d", &timeInput);
            convertFromMinutes(timeInput);
            break;
        case 3:
            printf("Enter time in hours: ");
            scanf("%d", &timeInput);
            convertFromHours(timeInput);
            break;
    }

    return 0;
}

// Convert seconds to minutes and hours
void convertFromSeconds(int seconds) {
    int hours = seconds / 3600;
    seconds %= 3600;
    int minutes = seconds / 60;
    seconds %= 60;
    printf("Time: %d hours, %d minutes, %d seconds\n", hours, minutes, seconds);
}

// Convert minutes to seconds and hours
void convertFromMinutes(int minutes) {
    int hours = minutes / 60;
    minutes %= 60;
    printf("Time: %d hours, %d minutes, %d seconds\n", hours, minutes, minutes * 60);
}

// Convert hours to minutes and seconds
void convertFromHours(int hours) {
    printf("Time: %d hours = %d minutes = %d seconds\n", hours, hours * 60, hours * 3600);
}

/*output
Time Conversion
1. Convert seconds to minutes and hours
2. Convert minutes to seconds and hours
3. Convert hours to minutes and seconds
Enter your choice: 1
Enter time in seconds: 60
Time: 0 hours, 1 minutes, 0 seconds
*/