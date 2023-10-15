#include <stdio.h>

int main () { 

    int array[5] = {1, 2, 90, 4, 5};
    int newArray[5] = {};

    int counter, counter1, counter2;
    counter1 = 1;

    newArray[0] = array[4];
    for (counter = 0; counter < 4; counter++){
        newArray[counter1] = array[counter];
        counter1++; 
    }

    printf("The rotated array is: ");
    for (counter2 = 0; counter2 < 5; counter2++) {
        printf("%d,", newArray[counter2]);
    }
    printf("\n");
}