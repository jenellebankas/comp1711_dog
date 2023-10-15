#include <stdio.h>

int main () { 

    int array[5] = {1, 2, 90, 4, 5};
    int max = 0;

    int counter;


    for (counter = 0; counter < 5; counter++){
        if (array[counter] > max) {
            max = array[counter];
        }
    }
    printf("The maximum element is: %d\n", max);
}