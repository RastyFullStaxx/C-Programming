#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* str;
    printf("Enter a string: ");
    scanf("%ms", &str);

    int len = strlen(str);

    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    free(str);
    return 0;
}
