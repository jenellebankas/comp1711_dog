#include <stdio.h>

int main () {

    int var1;
    printf("Enter a number: ");
    scanf("%d", &var1);
    int var2;
    printf("Enter another number: ");
    scanf("%d", &var2);


    int var3 = var1;
    var1 = var2;
    var2 = var3;

    printf("The variables are swapped: %d, %d\n", var1, var2);


}