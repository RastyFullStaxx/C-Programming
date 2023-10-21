#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

int main() {
    float radius, volume;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("Volume of the sphere: %.2f\n", volume);

    return 0;
}
