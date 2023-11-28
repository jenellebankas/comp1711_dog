#include <stdio.h>

int lets_get_serious() {
    return 0;
}

int main() {

    // void * is a pointer to anything (doesn't define what is at the address)
    // functions can also have pointers 
    printf("\n \n Even functions have address. \n \n");

    printf("The address of main function = %p \n \n", (void *)main);

    printf("The address of lets_get_serious function = %p \n \n", (void *) lets_get_serious);

    return 0;
}