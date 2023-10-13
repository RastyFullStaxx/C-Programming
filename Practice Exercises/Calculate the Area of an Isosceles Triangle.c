#include <stdio.h>
#include <math.h>

int main() {
    float base, height, area;

    printf("Enter the base length of the isosceles triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the isosceles triangle: ");
    scanf("%f", &height);

    area = 0.5 * base * height;

    printf("Area of the isosceles triangle: %.2f\n", area);

    return 0;
}
