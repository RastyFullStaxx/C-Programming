#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

int main() {
    float radius, surfaceArea;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    surfaceArea = 4 * PI * pow(radius, 2);

    printf("Surface Area of the sphere: %.2f\n", surfaceArea);

    return 0;
}
