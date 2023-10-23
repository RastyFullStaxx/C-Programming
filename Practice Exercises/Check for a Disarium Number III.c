#include <stdio.h>
#include <stdbool>
#include <math.h>

bool isDisariumNumber(int num) {
    int originalNum = num;
    int n = (int)log10(num) + 1;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += (int)pow(digit, n);
        num /= 10;
        n--;
    }

    return sum == originalNum;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isDisariumNumber(num))
        printf("%d is a Disarium number.\n", num);
    else
        printf("%d is not a Disarium number.\n", num);

    return 0;
}
