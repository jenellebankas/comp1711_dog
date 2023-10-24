#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main () {

    //define file name variable 
    char filename[] = "data.txt";
    //constant made with pointer to the file and opens file
    //pointer is number 
    FILE *file = open_file(filename, "r");
    
    //reads buffer size -1 as the last terminating character is \0
    int buffer_size = 100;
    char buffer [buffer_size];

    //reads from the file, copies one line into buffer and will be set to null if there is nothing to read
    //reads up to the end of the line, because it reads character by character 
    while(fgets(buffer, buffer_size, file) != NULL){
        printf("%s", buffer);    
    }
    
    
    //to write to the file 
    //fprintf(file,"Hello World!\n");
    //ensure to close the file 
    fclose(file);
    return 0;
}