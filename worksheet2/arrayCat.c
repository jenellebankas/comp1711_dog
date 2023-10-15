#include <stdio.h> 

int main () {

    int array1[3] = {1, 2, 3};
    int array2[3] = {4, 5, 6};

    int finalArray[6] = {};

    int counter, counter1, counter2, index;

    index = 0;

    
    for (counter = 0; counter < 3; counter++) {
        finalArray[index] = array1[counter];
        index++;
    }

    for (counter1 = 0; counter1 < 3; counter1++) {
        finalArray[index] = array2[counter1];
        index++;
    }

    for (counter2 = 0; counter2 < 6; counter2++) {
        printf("%d, ", finalArray[counter2]);
    }
    printf("\n");
}