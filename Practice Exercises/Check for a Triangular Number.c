#include <stdio.h>
#include <stdbool>
#include <math.h>

bool isTriangularNumber(int num) {
    int n = (int)sqrt(2 * num);
    return (n * (n + 1)) / 2 == num;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isTriangularNumber(num))
        printf("%d is a triangular number.\n", num);
    else
        printf("%d is not a triangular number.\n", num);

    return 0;
}
