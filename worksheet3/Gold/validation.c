#include <stdio.h>

int main () { 

    int num;

    while (num != -1) {

        printf("Enter a number: ");
        scanf("%d", &num);

        if (num >= 0 && num <= 100) {
            printf("The number %d, is in range\n", num);
        } else if (num == -1) {
            printf("You have exited.\n");
        } else {
            printf("The number %d, is not in range\n", num);
        }
    }
    return 0;  
}