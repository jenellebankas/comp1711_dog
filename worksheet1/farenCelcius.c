#include <stdio.h>

int main () {

    float farenheit;
    printf("Converting temp: ");
    scanf("%f", &farenheit);

    float converted = (farenheit - 32) * 5/9;
    printf("The temp in celcius %f \n", converted);
    return 0;
}