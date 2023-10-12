#include <stdio.h>

int main() {
    float diagonal1, diagonal2, area;

    printf("Enter the lengths of the two diagonals of the kite: ");
    scanf("%f %f", &diagonal1, &diagonal2);

    area = (diagonal1 * diagonal2) / 2;

    printf("Area of the kite: %.2f\n", area);

    return 0;
}
