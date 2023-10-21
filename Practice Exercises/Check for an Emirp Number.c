#include <stdio.h>
#include <stdbool>
#include <math.h>

bool isPrime(int num) {
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }

    return true;
}

bool isEmirpNumber(int num) {
    if (isPrime(num)) {
        int reversedNum = 0;
        int originalNum = num;
        while (num > 0) {
            reversedNum = reversedNum * 10 + num % 10;
            num /= 10;
        }
        return isPrime(reversedNum) && reversedNum != originalNum;
    }
    return false;
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isEmirpNumber(num))
        printf("%d is an Emirp number.\n", num);
    else
        printf("%d is not an Emirp number.\n", num);

    return 0;
}
