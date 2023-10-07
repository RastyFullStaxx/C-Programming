#include <stdio.h>
#include <math.h>

int isPerfectSquare(int num) {
    int sqrtNum = sqrt(num);
    return (sqrtNum * sqrtNum == num);
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isPerfectSquare(num))
        printf("%d is a perfect square.\n", num);
    else
        printf("%d is not a perfect square.\n", num);

    return 0;
}
