#include <stdio.h>

int main () {

    float var1;
    printf("Width: ");
    scanf("%f", &var1);
    float var2;
    printf("Length: ");
    scanf("%f", &var2);

    float var3 = var1 * var2;

    printf("%f \n",var3);

    return 0;
   
}