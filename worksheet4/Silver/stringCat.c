#include <stdio.h>

int stringLength(char string[]);
char concatStrings(string1, string2);

int main () {

    
    char newString = concatStrings("hello", "bye");
  
    printf("The new string is, %c", newString);
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

char concatStrings(string1, string2) {

    int length1 = stringLength(string1);
    int length2 = stringLength(string2);
    int totalLength = length1 + length2;

    char newString[totalLength] = {}
    int counter, index, count;
    index = 0;

    for (counter = 0; counter < length1; counter++) {
        newString[index] = string1[counter];
        index++;
    }

    for (counter1 = 0; counter1 < length2; counter1++) {
        newString[index] = string2[counter1];
    }

    for (count = 0; count < totalLength; count ++) {
        printf("%c", newString[count]);
    }
}

