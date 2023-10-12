#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindromicString(char str[]) {
    int len = strlen(str);

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1])
            return false;
    }

    return true;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    if (isPalindromicString(str))
        printf("The string is palindromic.\n");
    else
        printf("The string is not palindromic.\n");

    return 0;
}
