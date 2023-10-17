#include <stdio.h>
#include <math.h>

int main() {
    float baseLength, height, volume;

    printf("Enter the length of the base of the triangular pyramid: ");
    scanf("%f", &baseLength);

    printf("Enter the height of the triangular pyramid: ");
    scanf("%f", &height);

    volume = (1.0 / 3.0) * (baseLength * baseLength) * height;

    printf("Volume of the triangular pyramid: %.2f\n", volume);

    return 0;
}
