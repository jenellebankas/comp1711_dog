#include <stdio.h>

int stringLength(char inputString[]);

int main () {

    int length = stringLength("helloooooo");
    printf("The length of this string is %d\n", length);

}

int stringLength(char inputString[]) {

    int length, total = 0; 
    char *ptr = inputString;

    while (*ptr != '\0') {
        total += 1;
        ptr++;
    }

    return total;
}