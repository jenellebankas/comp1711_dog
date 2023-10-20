#include <stdio.h> 

int main () { 

    int mark; 
    printf("Enter your mark: ");
    scanf("%d", &mark);

    if (mark >= 70 && mark <= 100) {
        printf("You achieved a distinction.\n");
    } else if (mark >= 50 && mark < 70) {
        printf("You have passed.\n");
    } else if(mark < 50 && mark >= 0) { 
        printf("You have failed.\n");
    } else { 
        printf("Invalid input.\n");
    }

    return 0;
}