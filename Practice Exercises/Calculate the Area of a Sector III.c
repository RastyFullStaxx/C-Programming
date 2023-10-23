#include <stdio.h>
#include <math.h>

int main() {
    float radius, angle, area;

    printf("Enter the radius of the sector: ");
    scanf("%f", &radius);

    printf("Enter the central angle in degrees: ");
    scanf("%f", &angle);

    area = (angle / 360) * M_PI * pow(radius, 2);

    printf("Area of the sector: %.2f\n", area);

    return 0;
}
