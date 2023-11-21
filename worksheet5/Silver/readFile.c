#include <stdio.h> 
#include <stdlib.h>

int main () { 

    char filename [] = "/workspaces/comp1711_dog/worksheet5/Bronze/squares.dat";
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    int buffer_size = 100;
    char line_buffer[buffer_size];

    int count;
    float number, total, average;


    while (fgets(line_buffer, buffer_size, file) != NULL) {
        number = atoi(line_buffer);
        total += number;
        count ++;
    }

    average = total / count;

    printf("The average from the file is: %f\n", average);

}