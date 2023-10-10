#include <stdio.h>

int reverseNumber(int num) {
    int reversedNum = 0;
    while (num != 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }
    return reversedNum;
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int reversedNum = reverseNumber(num);

    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
