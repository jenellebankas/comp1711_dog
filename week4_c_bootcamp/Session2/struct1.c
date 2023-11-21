#include <stdio.h>

struct student {
    //always assume bigger for mem allocation for strings
    char name [200];
    char student_id [11]; // Assuming 10 digits.
    int mark;
};

int main () {
    //store id numbers and phone numbers as strings when not using them for calculations 
    struct student new_student;

    //scanf has problems with names because of the spaces 
    printf("Please enter a name: ");
    scanf("%s",  new_student.name);

    printf("Please enter a student id: ");
    scanf("%s", new_student.student_id);
    
    printf("Please enter a mark: ");
    scanf("%d", &new_student.mark);
    

    printf("Student name: %s\n", new_student.name);
    printf("Student ID:   %s\n", new_student.student_id);
    printf("Final mark:   %u\n", new_student.mark);
    return 0;
}