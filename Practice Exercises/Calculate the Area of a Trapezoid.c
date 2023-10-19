#include <stdio.h>

int main() {
    float base1, base2, height, area;

    printf("Enter the length of the first base of the trapezoid: ");
    scanf("%f", &base1);

    printf("Enter the length of the second base of the trapezoid: ");
    scanf("%f", &base2);

    printf("Enter the height of the trapezoid: ");
    scanf("%f", &height);

    area = 0.5 * (base1 + base2) * height;

    printf("Area of the trapezoid: %.2f\n", area);

    return 0;
}
