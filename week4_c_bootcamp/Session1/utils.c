//implementation file
#include "utils.h"

FILE *open_file(char filename[], char mode[]) {

    FILE *file = fopen(filename, mode);

        if (file == NULL) {
            //prints the error 
            perror("File I/O");
            //ensures that the error is raised
            exit(1);
    }
    return file;
}

