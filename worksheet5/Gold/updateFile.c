#include <stdio.h>
#include <stdlib.h>

int main () { 

    
    int count;

    char filename [] = "numbers.dat";
    FILE *file = fopen(filename, "a+");

    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    int buffer_size = 100;
    char line_buffer[buffer_size];

    int counter;

    float number, total, average;
    
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        number = atof(line_buffer);
        total += number;
        counter ++;
    }

    average = total / counter;
    fprintf(file, "%f\n", average);

    fclose(file);
    return 0;
    
    
    
}