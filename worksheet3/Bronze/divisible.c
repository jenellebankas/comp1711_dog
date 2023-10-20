#include <stdio.h> 

int main () {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if ((num % 4 && num % 5) == 0)) {
        printf("The number is divisible. \n");
    } else { 
       printf("The number is not divisible. \n");
    }

    return 0;
}