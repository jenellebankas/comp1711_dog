#include <stdio.h>
#include <limits.h>
#include <float.h>

int main () {
    
    printf("Int max size is: %+d\n", INT_MAX);
    printf("Float max size is: %e\n", FLT_MAX);
    printf("Double max size is: %e\n", DBL_MAX);
    printf("Char max size is: %+d\n", CHAR_MAX);
    return 0;
}