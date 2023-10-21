#include <stdio.h>

int main() {
    float side, perimeter;

    printf("Enter the side length of the rhombus: ");
    scanf("%f", &side);

    perimeter = 4 * side;

    printf("Perimeter of the rhombus: %.2f\n", perimeter);

    return 0;
}
