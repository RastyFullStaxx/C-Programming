#include <stdio.h>

int main() {
    float side, perimeter;

    printf("Enter the side length of the equilateral triangle: ");
    scanf("%f", &side);

    perimeter = 3 * side;

    printf("Perimeter of the equilateral triangle: %.2f\n", perimeter);

    return 0;
}
