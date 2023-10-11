#include <stdio.h>

int main () {

    int numDays;
    printf("Enter a days: ");
    scanf("%d", &numDays);

    numDays * 24 * 60 * 60;

    long long distance = 3.0e8 * numDays;
    printf("It would travel %lld m\n", distance);
    return 0;

}