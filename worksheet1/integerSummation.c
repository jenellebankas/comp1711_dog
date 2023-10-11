#include <stdio.h>

int main () {

    int var1;
    printf("Enter number one: ");
    scanf("%d", &var1);

    int var2;
    printf("Enter number two: ");
    scanf("%d", &var2);

    int var3 = var1 + var2;
    printf("The sum is, %d \n", var3);

    return 0;
}