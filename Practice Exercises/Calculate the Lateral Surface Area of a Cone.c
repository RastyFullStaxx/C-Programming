#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

int main() {
    float radius, slantHeight, lateralSurfaceArea;

    printf("Enter the radius of the cone: ");
    scanf("%f", &radius);

    printf("Enter the slant height of the cone: ");
    scanf("%f", &slantHeight);

    lateralSurfaceArea = PI * radius * slantHeight;

    printf("Lateral Surface Area of the cone: %.2f\n", lateralSurfaceArea);

    return 0;
}
