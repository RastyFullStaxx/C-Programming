#include <stdio.h>

int main() {
    float side, surfaceArea;

    printf("Enter the side length of the cube: ");
    scanf("%f", &side);

    surfaceArea = 6 * side * side;

    printf("Surface Area of the cube: %.2f\n", surfaceArea);

    return 0;
}
