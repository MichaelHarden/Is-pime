//
//  main.c
//  IsPrime
//
//  Created by Michael Harden on 1/11/22.
//  Code was demoed in lab on 1/14/22.

#include <stdio.h>
#include <math.h>

/* Declaring Funcitions */
void checkPrime(int n);

int main(int argc, const char * argv[]) {
    
    int givenNum;
    
    // request input from user and save it to  givenNum
    printf("Please enter a integer. I will check if it is prime :)\n\n");
    scanf("%d", &givenNum);
    
    checkPrime(givenNum);
    
    return 0;
}


/* The checkPrime method will take an integer input, check its primality, and
 print to the command line the result.*/
void checkPrime(int n) {
    // set var to keep track of if the number is prime
    //  1 - true
    //  0 - false
    char isPrime = 1;
    
    // 0, 1, and -1 are not prime numbers.
    if (n == 0 || n == 1 || n == -1) {
        isPrime = 0;
    }
    
    //check if n is divisible by 2. If n is not divisible by 2, all multibles
    // of 2 do not need to be checked for divisibility
    if (n % 2 == 0) {
        isPrime = 0;            // not prime
    }
    
    // the range of numbers which need to be checked are [3, round(squr(n))]
    // skipping every even number. If n is not prime, a pair of its factors,
    // will reside on both sides of squr(n). Due to this, the only numbers
    // which need to be checked for divisibilty are less than  squr(n).
    int squr_root = round(sqrt((int)n));
    // keep track of divisor
    int divisor=3;
    while (divisor <= squr_root){
        // check if divisor will evenly divid n
        if (n % divisor == 0) {
            isPrime = 0;        // not prime
            break;
        }
        divisor+=2;
    }
    
    if (isPrime){
        printf("\nThe number is prime.\n");
        return;
    }
    printf("\nThe number is not prime.\n");
        
}
