#include <stdio.h>
#include <stdbool>
#include <math.h>

bool isMagicNumber(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
        if (sum > 9) {
            num = sum;
            sum = 0;
        }
    }
    return sum == 1;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isMagicNumber(num))
        printf("%d is a Magic number.\n", num);
    else
        printf("%d is not a Magic number.\n", num);

    return 0;
}
