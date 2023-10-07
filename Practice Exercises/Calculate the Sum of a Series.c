#include <stdio.h>

int main() {
    int n;
    float sum = 0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("Sum of the series: %.2f\n", sum);

    return 0;
}
