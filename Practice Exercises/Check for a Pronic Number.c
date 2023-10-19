#include <stdio.h>
#include <stdbool>

bool isPronicNumber(int num) {
    for (int i = 1; i * (i + 1) <= num; i++) {
        if (i * (i + 1) == num) {
            return true;
        }
    }
    return false;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPronicNumber(num))
        printf("%d is a Pronic number.\n", num);
    else
        printf("%d is not a Pronic number.\n", num);

    return 0;
}
