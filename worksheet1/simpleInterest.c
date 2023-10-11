#include <stdio.h>
#include <math.h>

int main () { 
    
    float numAppreciate, rate, time, interest, interested;

    printf("Enter your value: ");
    scanf("%f", &numAppreciate);

    printf("Enter your rate: ");
    scanf("%f", &rate);

    printf("Enter your time: ");
    scanf("%f", &time);

    interest = pow(1+rate/100, time);

    interested = interest * numAppreciate;
    printf("The interest will be: %f\n", interested);

    return 0;
}