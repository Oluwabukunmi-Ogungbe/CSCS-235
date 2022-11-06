// This is a program to output Hello World to your Lecturer

#include <stdio.h>

int main() {
    char lecturer[20];

    // here we get the lecturer's name from the user

    printf("Enter your Lecturer's name: ");
    fgets(lecturerName, 20, stdin);

    // Output Hello world and the lecturer's name
    printf("%s Hello world", lecturerName);

    return 0;
     }