#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

bool isDisariumNumber(int num) {
    int originalNum = num;
    int sum = 0;
    int n = countDigits(num);

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
        n--;
    }

    return sum == originalNum;
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isDisariumNumber(num))
        printf("%d is a Disarium number.\n", num);
    else
        printf("%d is not a Disarium number.\n", num);

    return 0;
}
