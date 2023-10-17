#include <stdio.h>
#include <stdbool>
#include <math.h>

bool isAutomorphicNumber(int num) {
    long long square = (long long)num * num;
    while (num > 0) {
        if (num % 10 != square % 10) {
            return false;
        }
        num /= 10;
        square /= 10;
    }
    return true;
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isAutomorphicNumber(num))
        printf("%d is an Automorphic number.\n", num);
    else
        printf("%d is not an Automorphic number.\n", num);

    return 0;
}
