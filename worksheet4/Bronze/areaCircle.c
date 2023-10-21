#include <stdio.h>

float areaCircle(float radius);

int main () {
    
  float area = areaCircle(5);
  printf("The area is %f\n", area);
    
}

float areaCircle(float radius) {

    float area;

    area = 3.14159 * radius * radius;

    return area;
}