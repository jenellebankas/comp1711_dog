#include <stdio.h>

int main() {

    // declare array of integers 
    // need to know where it starts and where it needs to jump in order to reach element of the array (when declaring array type)
    int vector[5] = {1,2,3,4,5};

    // declares pointer for the address of integer type 
    int* address;

    // they are exactly the same and know that they are both pointing to inegers 
    address = vector; 


    // will print address of the vector and the first value of the array twic 
    printf("\n \n address = %p\n", address);
    printf( " vector = %p\n\n",vector);
    // cannot do arithmetic with void pointers they must be re-cast
    printf ("address[0] = %d  ,  vector[0] = %d  \n\n", address[0], vector[0]);

    return 0;

}