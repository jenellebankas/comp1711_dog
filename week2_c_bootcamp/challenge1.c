#include <stdio.h>
#include <stdlib.h> 

int main() {

    int counter1;
    int counter2;

    for (counter1 = 1; counter1 <=12; counter1++) {
            printf("\n\n");
        for  (counter2 = 1; counter2 <= 12; counter2++) {
            printf("%d\t", counter1 * counter2);
        }
    }

    printf("\n");


    return (0);
}