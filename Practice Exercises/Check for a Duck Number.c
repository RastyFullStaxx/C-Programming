#include <stdio.h>
#include <stdbool>
#include <string.h>

bool isDuckNumber(char numStr[]) {
    if (numStr[0] == '0') {
        return false;
    }

    for (int i = 1; i < strlen(numStr); i++) {
        if (numStr[i] == '0') {
            return true;
        }
    }
    return false;
}

int main() {
    char numStr[20];

    printf("Enter a number: ");
    scanf("%s", numStr);

    if (isDuckNumber(numStr))
        printf("%s is a Duck number.\n", numStr);
    else
        printf("%s is not a Duck number.\n", numStr);

    return 0;
}
