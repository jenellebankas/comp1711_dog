#include <stdio.h>

int isPrime(int number);

int main() {

    int checkPrime = isPrime(12);
    printf("%d\n", checkPrime);
}

int isPrime(number){

    int count, counter;
    int primeCheck = 1;
    for (count = 2; count < number; count ++) {
        if (number % count == 0){
            primeCheck = 0;
            break; 
        }
    }
    return primeCheck;
}