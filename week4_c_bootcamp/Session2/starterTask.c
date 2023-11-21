#include <stdio.h>
#include <stdlib.h>

int main () {

    char filename [] = "input.txt";
    FILE* file = fopen(filename, "r");

     if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    int buffer_size = 100;
    char line_buffer[buffer_size];

    int aboveThousand = 0;

    while (fgets(line_buffer, buffer_size, file) != NULL) {
        printf("%d\n", atoi(line_buffer));
        if (atoi(line_buffer) > 1000) { 
            aboveThousand++;
        }
    }
    fclose(file);

    printf("There are %d numbers that are above a thousand.\n", aboveThousand);

    return 0;
}

