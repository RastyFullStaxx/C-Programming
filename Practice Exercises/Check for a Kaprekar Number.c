#include <stdio.h>
#include <stdbool>
#include <math.h>

bool isKaprekarNumber(int num) {
    if (num == 1)
        return true;

    long long square = (long long)num * num;
    int digits = 0;
    long long temp = square;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    for (int d = 1; d < digits; d++) {
        long long divisor = pow(10, d);
        long long sum = square / divisor + square % divisor;
        if (sum == num)
            return true;
    }

    return false;
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isKaprekarNumber(num))
        printf("%d is a Kaprekar number.\n", num);
    else
        printf("%d is not a Kaprekar number.\n", num);

    return 0;
}
