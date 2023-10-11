#include <stdio.h>

int main () { 

    int input;

    printf("Enter a number: ");
    scanf("%d", &input);

    if (input%2 != 0) {
        printf("Your number is odd\n");
    } else {
        printf("Your number is even\n");
    };

    return 0;
}