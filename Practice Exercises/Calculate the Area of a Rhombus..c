#include <stdio.h>

int main() {
    float diagonal1, diagonal2, area;

    printf("Enter the lengths of the two diagonals of the rhombus: ");
    scanf("%f %f", &diagonal1, &diagonal2);

    area = 0.5 * diagonal1 * diagonal2;

    printf("Area of the rhombus: %.2f\n", area);

    return 0;
}
