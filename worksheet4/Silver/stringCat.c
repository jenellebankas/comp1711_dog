#include <stdio.h>

int stringLength(char inputString[]) {

    int length, total = 0; 
    char *ptr = inputString;

    while (*ptr != '\0') {
        total += 1;
        ptr++;
    }
    return total;
}

char concatStrings(char string1[], char string2[]) {

    int length1 = stringLength(string1);
    printf("%d",length1);
    int length2 = stringLength(string2);
    printf("%d", length2);
    int totalLength = length1 + length2;

    char newString[] = {};
    int counter, count, counter1;
    int index = 0;

    for (counter = 0; counter < length1 - 1; counter++) {
        newString[index] = string1[counter];
        index++;
    }

    for (counter1 = 0; counter1 < length2 - 1; counter1++) {
        newString[index] = string2[counter1];
        index++;
    }

    for (count = 0; count < totalLength - 1; count ++) {
        printf("%c", newString[count]);
    }
}



int main () {
    
    char newString = concatStrings("hello", "bye");
  
    printf("The new string is, %c", newString);
}
