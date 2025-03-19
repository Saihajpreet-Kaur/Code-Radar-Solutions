// Your code here...
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0;  // 0 and 1 are not prime
    for (int i = 2; i * i <= num; i++) {  // Check divisibility up to sqrt(num)
        if (num % i == 0) return 0;
    }
    return 1;  // Prime number
}

// Function to print all prime numbers in range [a, b]
void printPrimesInRange(int a, int b) {
    int printed = 0;  // Track if any prime numbers are printed

    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            if (printed) printf(" ");  // Space before numbers but no trailing space
            printf("%d", i);
            printed = 1;
        }
    }
    printf("\n");  // Newline at the end
}