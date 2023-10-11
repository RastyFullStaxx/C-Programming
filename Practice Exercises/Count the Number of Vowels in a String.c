#include <stdio.h>
#include <string.h>

int countVowels(char str[]) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
    }
    return count;
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    gets(str);

    int vowelCount = countVowels(str);

    printf("Number of vowels in the string: %d\n", vowelCount);

    return 0;
}
