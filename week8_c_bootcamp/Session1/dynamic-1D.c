#include <stdio.h>
#include <stdlib.h>

int main() {

    int array_size;
    printf("\n Input the size of the array = ");

    // allocate enough space for the specified size of the array 
    scanf("%d", &array_size);
    printf("\n\n");

    // malloc needs num of bytes we think we will need and what we want to store and how much we will store 
    int* vector = (int *) malloc (sizeof(int)*array_size);

    for (int i=0; i<array_size; i++) {
        vector[i] = i*i;
    }


    for (int i=0; i<array_size; i++) {
        printf ("vector[%d] = %d\n", i , vector[i]);
    }

    // needs to freed if malloc is used otherwise a memory leak will occur 
    free(vector);

    return 0;
}