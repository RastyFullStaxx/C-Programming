#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

int main() {
    float radius, angle, area;

    printf("Enter the radius of the sector: ");
    scanf("%f", &radius);

    printf("Enter the angle (in degrees) of the sector: ");
    scanf("%f", &angle);

    area = (PI * pow(radius, 2) * angle) / 360;

    printf("Area of the sector: %.2f\n", area);

    return 0;
}
