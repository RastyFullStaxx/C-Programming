#include <stdio.h>
#include <math.h>

int main() {
    float side, area;

    printf("Enter the side length of the regular hexagon: ");
    scanf("%f", &side);

    area = (3 * sqrt(3) * pow(side, 2)) / 2;

    printf("Area of the regular hexagon: %.2f\n", area);

    return 0;
}
