#include <stdio.h> 

int main () { 

    int temp; 
    printf("Enter a temperature: ");
    scanf("%d", &temp);

    if (temp >= -10 && temp <= 40) {
        printf("The temperature is within range.\n");
    } else { 
        printf("This temperature is not in range.\n");
    }

    return 0;
}