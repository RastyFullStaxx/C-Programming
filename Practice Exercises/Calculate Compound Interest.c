#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compoundInterest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    rate /= 100; // Convert percentage to decimal

    compoundInterest = principal * pow(1 + rate, time) - principal;

    printf("Compound interest: %.2f\n", compoundInterest);

    return 0;
}
