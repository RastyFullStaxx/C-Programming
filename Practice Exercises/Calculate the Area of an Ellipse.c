#include <stdio.h>
#define PI 3.14159265359

int main() {
    float majorAxis, minorAxis, area;

    printf("Enter the length of the major axis: ");
    scanf("%f", &majorAxis);

    printf("Enter the length of the minor axis: ");
    scanf("%f", &minorAxis);

    area = PI * majorAxis * minorAxis;

    printf("Area of the ellipse: %.2f\n", area);

    return 0;
}
