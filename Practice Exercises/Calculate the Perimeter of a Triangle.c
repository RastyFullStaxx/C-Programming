#include <stdio.h>

int main() {
    float side1, side2, side3, perimeter;

    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    perimeter = side1 + side2 + side3;

    printf("Perimeter of the triangle: %.2f\n", perimeter);

    return 0;
}
