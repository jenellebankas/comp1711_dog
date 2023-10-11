#include <stdio.h>

int main () {

    int counter;
    int fact;
    printf("Enter a number: ");
    scanf("%d", &fact);

    int total = 1;

    for (counter = fact; counter > 1; counter--) {
        total *= counter;
    };

    printf("The factorial is: %d\n", total);
    return 0;
}