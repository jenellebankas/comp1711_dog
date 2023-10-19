
#include <stdio.h>
int main() {

    int mark;
    printf("Input Mark: ");
    scanf("%d", &mark);

    
    if (mark >= 40 && mark <= 100) {
        printf ("The mark of %d is a pass\n", mark);
    } else if (mark < 40 && mark >= 0 ) { 
        printf ("The mark of %d is a fail\n", mark);
    } else { 
        printf("Mark is not valid. \n");
    }
    
    return 0;

}