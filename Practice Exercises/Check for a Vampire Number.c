#include <stdio.h>
#include <stdbool>
#include <math.h>

int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

bool isVampireNumber(int num) {
    int n = countDigits(num);
    if (n % 2 != 0) {
        return false;
    }

    for (int i = pow(10, n / 2 - 1); i < pow(10, n / 2); i++) {
        if (num % i == 0) {
            int j = num / i;
            int sortedNum = i * pow(10, n / 2) + j;
            if (sortedNum != num) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isVampireNumber(num))
        printf("%d is a Vampire number.\n", num);
    else
        printf("%d is not a Vampire number.\n", num);

    return 0;
}
