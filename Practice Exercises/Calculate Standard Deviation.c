#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float data[100], mean = 0.0, variance = 0.0, stdDeviation;

    printf("Enter the number of data points: ");
    scanf("%d", &n);

    printf("Enter %d data points:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &data[i]);
        mean += data[i];
    }

    mean /= n;

    for (int i = 0; i < n; i++) {
        variance += pow(data[i] - mean, 2);
    }

    variance /= n;

    stdDeviation = sqrt(variance);

    printf("Standard Deviation: %.2f\n", stdDeviation);

    return 0; }
