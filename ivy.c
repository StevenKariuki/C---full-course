#include <stdio.h>

int main() {
    char reg_number[20];
    char name[50];
    char course[50];
    char county[50];

    // Prompt user for inputs
    printf("Enter your registration number: ");
    scanf("%s", reg_number);

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your course: ");
    scanf("%s", course);

    printf("Enter your county: ");
    scanf("%s", county);

    // Display the information
    printf("\n----- Student Information -----\n");
    printf("Registration Number: %s\n", reg_number);
    printf("Name: %s\n", name);
    printf("Course: %s\n", course);
    printf("County: %s\n", county);

    return 0;
}