#include <stdio.h>

int main() {

    // defining integer variable and assigning value of 10
    int var = 10;

    // define pointer and assign the address of var and the type of the variable stored
    int* var_address = &var;

    printf("\n");
    printf("The content of \"var\" = %d\n",var);
    printf ("The content \"var_address\" = %p\n", var_address);
    // dereferencing used when *var_address 
    printf ("Now the magic ! Content of \"*var_address\" = %d\n", *var_address);
    printf("\n");

    return 0;
}