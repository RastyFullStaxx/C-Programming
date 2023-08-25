#include <stdio.h>

int main() {

    char statement[30];
    int alphabets = 0;
    int digits = 0;
    int specialChars = 0;

    printf("Input the string: ");
    fgets(statement, sizeof(statement), stdin);

    for (int i = 0; statement[i] != '\0'; i++) {
        if ((statement[i] >= 'a' && statement[i] <= 'z') || (statement[i] >= 'A' && statement[i] <= 'Z'))
            alphabets++;
        else if (statement[i] >= '0' && statement[i] <= '9')
            digits++;
        else if (statement[i] != '\n')
            specialChars++;
    }

    
    printf("Alphabets in the string: %d\n", alphabets);
    printf("Digits in the string: %d\n", digits);
    printf("Special characters in the string: %d\n", specialChars);
    printf("==============================");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    return 0;
}
