#include <stdio.h>

int findHCF(int a, int b) {
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int hcf = findHCF(num1, num2);

    printf("HCF (GCD) of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}
