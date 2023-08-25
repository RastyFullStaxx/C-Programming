#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    const float PI = 3.14;
    float radius;
    double circumference;

    printf("Enter the radius of your circle: ");
    scanf("%f", &radius);

    circumference = round(2 * PI * radius);
    double area = PI * pow(radius, 2);

    printf("\nThe circumference of your circle with a radius of %f is %lf\n\n", radius, circumference);

    char reveal[25];

    printf("Type \"Answer\" to reveal the area of your circle: ");
    scanf("%s", reveal);

    while (strcmp(reveal, "Answer") != 0) {
        printf("\nYou entered a wrong character!"); 
        printf("Type \"Answer\" again: "); 
        scanf("%s", reveal);
    } 
        printf("\nThe area of your circle is %lf", area);

    return 0;
}
