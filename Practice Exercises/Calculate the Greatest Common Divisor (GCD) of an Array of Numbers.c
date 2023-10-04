#include <stdio.h>

int findGCD(int a, int b) {
    if (b == 0)
        return a;
    else
        return findGCD(b, a % b);
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int gcd = arr[0];

    for (int i = 1; i < n; i++) {
        gcd = findGCD(gcd, arr[i]);
    }

    printf("GCD of the array elements: %d\n", gcd);

    return 0;
}
