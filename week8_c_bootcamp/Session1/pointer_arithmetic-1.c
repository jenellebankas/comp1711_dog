#include <stdio.h>

int main() {

    int vector[5] = {11,13,17, 23 , 31};

    int* address = vector;

    // parentheses as you add one then look at what is stored there
    printf ("\nAddress[0] = %d\n", *address);
    printf ("\nAddress[1] = %d\n", *(address+1));
    printf ("\nAddress[2] = %d\n", *(address+2));

    return 0;

}