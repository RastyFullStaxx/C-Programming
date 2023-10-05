#include <stdio.h>

long long largestPrimeFactor(long long num) {
    long long maxPrime = -1;
    
    while (num % 2 == 0) {
        maxPrime = 2;
        num /= 2;
    }
    
    for (long long i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            maxPrime = i;
            num /= i;
        }
    }
    if (num > 2) {
        maxPrime = num;
    }
    return maxPrime;}

int main() {
    long long n;
    
    printf("Enter a positive integer: ");
    scanf("%lld", &n);
    
    long long result = largestPrimeFactor(n);
    
    printf("Largest prime factor: %lld\n", result);
    
    return 0;}
