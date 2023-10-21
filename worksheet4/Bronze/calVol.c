#include <stdio.h>

float calVol(float radius);

int main () {

  float area = calVol(5);
  printf("The volume is %f\n", area);  

}

float calVol(float radius) {

    float area;
    area = 3.14159 * radius * radius * radius * 4 / 3;
    return area;
    
}