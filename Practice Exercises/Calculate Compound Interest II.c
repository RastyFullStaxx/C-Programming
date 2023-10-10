#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compoundInterest;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (as a decimal): ");
    scanf("%lf", &rate);

    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    compoundInterest = principal * (pow(1 + rate, time) - 1);

    printf("Compound Interest: %.2lf\n", compoundInterest);

    return 0;
}
