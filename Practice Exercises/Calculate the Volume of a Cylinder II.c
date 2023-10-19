#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

int main() {
    float radius, height, volume;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    volume = PI * pow(radius, 2) * height;

    printf("Volume of the cylinder: %.2f\n", volume);

    return 0;
}
