#include <stdio.h>

int main () { 

    float temperature;
    printf("What's the temperature today? ");
    scanf("%f", &temperature);

    float threshold = 15;

    if (temperature > threshold) {
        printf("No need for a jacket.\n");
    } else {
        printf("Good weather for a jacket.\n");
    }
    return 0;

}