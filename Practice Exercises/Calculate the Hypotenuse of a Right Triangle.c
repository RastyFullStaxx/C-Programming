#include <stdio.h>
#include <math.h>

int main() {
    float side1, side2, hypotenuse;

    printf("Enter the length of the first side of the right triangle: ");
    scanf("%f", &side1);

    printf("Enter the length of the second side of the right triangle: ");
    scanf("%f", &side2);

    hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2);

    printf("Hypotenuse of the right triangle: %.2f\n", hypotenuse);

    return 0;
}
