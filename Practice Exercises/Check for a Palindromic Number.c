#include <stdio.h>
#include <stdbool.h>

bool isPalindromicNumber(int num) {
    int originalNum = num, reversedNum = 0, digit;

    while (num > 0) {
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isPalindromicNumber(num))
        printf("%d is a palindromic number.\n", num);
    else
        printf("%d is not a palindromic number.\n", num);

    return 0;
}
