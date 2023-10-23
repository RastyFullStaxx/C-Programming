#include <stdio.h>
#include <math.h>

int main() {
    float majorAxis, minorAxis, area;

    printf("Enter the length of the major axis of the ellipse: ");
    scanf("%f", &majorAxis);

    printf("Enter the length of the minor axis of the ellipse: ");
    scanf("%f", &minorAxis);

    area = M_PI * majorAxis * minorAxis;

    printf("Area of the ellipse: %.2f\n", area);

    return 0;
}
