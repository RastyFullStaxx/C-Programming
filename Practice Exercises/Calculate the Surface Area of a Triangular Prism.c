#include <stdio.h>
#include <math.h>

int main() {
    float baseLength, height, lateralArea, baseArea, surfaceArea;

    printf("Enter the length of the base of the triangular prism: ");
    scanf("%f", &baseLength);

    printf("Enter the height of the triangular prism: ");
    scanf("%f", &height);

    lateralArea = 3 * baseLength * height;
    baseArea = 0.5 * baseLength * baseLength;
    surfaceArea = lateralArea + 2 * baseArea;

    printf("Surface Area of the triangular prism: %.2f\n", surfaceArea);

    return 0;
}
