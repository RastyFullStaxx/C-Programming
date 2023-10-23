#include <stdio.h>
#include <stdbool>

bool isKaprekarConstantNumber(int num) {
    if (num == 6174)
        return true;

    if (num == 1111 || num % 1111 == 0)
        return false;

    int ascendingNum = num;
    int descendingNum = num;

    while (ascendingNum != 6174) {
        int digits[4];
        for (int i = 0; i < 4; i++) {
            digits[i] = ascendingNum % 10;
            ascendingNum /= 10;
        }

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3 - i; j++) {
                if (digits[j] > digits[j + 1]) {
                    int temp = digits[j];
                    digits[j] = digits[j + 1];
                    digits[j + 1] = temp;
                }
            }
        }

        ascendingNum = digits[0] * 1000 + digits[1] * 100 + digits[2] * 10 + digits[3];
        descendingNum = digits[3] * 1000 + digits[2] * 100 + digits[1] * 10 + digits[0];

        if (ascendingNum == descendingNum)
            return false;

        num = ascendingNum - descendingNum;
    }

    return true;
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isKaprekarConstantNumber(num))
        printf("%d is a Kaprekar Constant number.\n", num);
    else
        printf("%d is not a Kaprekar Constant number.\n", num);

    return 0;
}
