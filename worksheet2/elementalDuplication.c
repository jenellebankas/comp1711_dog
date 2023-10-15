#include <stdio.h>


int main () { 

    int array[6] = {1, 3, 5, 3, 5, 6};
    int duplicates[6] = {0, 0, 0, 0, 0, 0};

    int counter, counter1, counter2, total;

    for (counter = 0; counter < 6; counter++) {
        total = 0;
        for (counter1 = 0; counter1 < 6; counter1++){
            if (array[counter] == array[counter1]) {
                total++;
            }
        }
        if (total > 1) {
            duplicates[counter] = array[counter];
            printf("The number, %d is a duplicate\n", duplicates[counter]);
        }       
    }

    //for(counter2 = 0; counter2 < 6; counter++){
       // printf("The duplicates are, %d\n", duplicates[counter]);
    //}
}