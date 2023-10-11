#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isArmstrongNumber(int num) {
    int originalNum, remainder, n = 0, result = 0;

    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    return num == result;
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isArmstrongNumber(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
