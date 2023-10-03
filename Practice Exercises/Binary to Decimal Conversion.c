#include <stdio.h>
#include <math.h>

int binaryToDecimal(int binary) {
    int decimal = 0, i = 0;
    
    while (binary != 0) {
        int remainder = binary % 10;
        decimal += remainder * pow(2, i);
        binary /= 10;
        i++;
    }
    
    return decimal;
}

int main() {
    int binary;
    
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    
    printf("Decimal equivalent: %d\n", binaryToDecimal(binary));
    
    return 0;
}
