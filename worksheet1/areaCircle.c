#include <stdio.h>
#include <math.h>

int main () { 

    float radius;
    printf("Enter a radius: ");
    scanf("%f", &radius);

    float area = M_PI * (radius*radius);
    printf("The area is: %f\n", area);
    return 0;

}