#include <stdio.h>
#include <stdlib.h>

int main () { 

    char filename[] = "squares.dat";
    //constant made with pointer to the file and opens file
    //pointer is number 
    FILE *file = fopen(filename, "w");
     if (file == NULL) {
            //prints the error 
            perror("File I/O");
            //ensures that the error is raised
            exit(1);
    }

    int n, counter;

    printf("Please enter n: ");
    scanf("%d", &n);

    for (counter = 0; counter <= n; counter ++) {

        fprintf(file, "%d\n", counter * counter);
    }

    fclose(file);
    return 0;


}