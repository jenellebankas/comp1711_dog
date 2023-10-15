#include <stdio.h>

int main () { 

    int array[5] = {1, 2, 3, 4, 5};
    int newArray[5] = {};

    int counter, counter2;
    int counter1 = 0;

    for (counter = 4; counter >= 0; counter--){
        newArray[counter1] = array[counter];
        counter1++; 
    }
    printf("The reversed array is: ");
    for (counter2 = 0; counter2 < 5; counter2++) {
        printf("%d", newArray[counter2]);
    }
    printf("\n");
}