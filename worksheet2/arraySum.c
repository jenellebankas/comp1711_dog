#include <stdio.h>

int main () { 

    int array[5] = {1, 2, 3, 4, 5};
    int total = 0;
    int counter;

    for (counter = 0; counter <5; counter++){
        total = total + array[counter];
    }

printf("The total is %d\n", total);
}