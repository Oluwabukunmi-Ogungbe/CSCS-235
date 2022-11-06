
// This is a program to get the names of 10 students
#include <stdio.h>


int main() {
   

    char studentNames[9] = {};
    for(int i=0;i<= 9;i++) {
        
        // this is where the names of the students are inputted
	printf("Enter the student name : ");
	fgets(studentNames, 10, stdin);
	printf("The name entered is %s \n ", studentNames);
	
	                   }
    return 0;
            }
