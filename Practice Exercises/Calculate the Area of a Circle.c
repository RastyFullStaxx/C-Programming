#include <stdio.h>

int main() {
    double radius, area;
    
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    
    area = 3.14159 * radius * radius;
    
    printf("The area of the circle is: %.2lf\n", area);
    
    return 0;
}
