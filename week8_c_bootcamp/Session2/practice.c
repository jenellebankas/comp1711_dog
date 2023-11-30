#include <stdlib.h>
#include <stdio.h>

int main() { 

    int size = 0;
    printf("An int is the size: %ld\n", sizeof(int));

    char *address = malloc(200 * sizeof(char));
    int *data = malloc(70);

    printf("Please input a size for your array: ");
    scanf("%d", &size);

    double *samples = malloc(size);
}