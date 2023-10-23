#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

int main() {
    float radius, height, volume;

    printf("Enter the radius of the cone: ");
    scanf("%f", &radius);

    printf("Enter the height of the cone: ");
    scanf("%f", &height);

    volume = (1.0 / 3.0) * PI * pow(radius, 2) * height;

    printf("Volume of the cone: %.2f\n", volume);

    return 0;
}
