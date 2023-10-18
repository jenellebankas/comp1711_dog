#include <stdio.h>

int main () { 

    int option;
    printf("Choose an option (1 to 5): ");
    scanf("%d", &option);

    switch (option) {
        case 1: printf("You have picked option 1\n");
            break;

        case 2: printf("You have picked option 2\n");
            break;
        
        case 3: printf("You have picked option 3\n");
            break;
                
        case 4: printf("You have picked option 4\n");
            break;

        case 5: printf("You have picked option 5\n");
            break;
        
        default: 
            printf("Invalid input\n");
            break;

    return 0;
    }
     
}