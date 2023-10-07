#include <stdio.h>
#include <string.h>

int countVowels(const char *str) {
    int count = 0;
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }

    return count;
}

int countConsonants(const char *str) {
    int count = 0;
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                  ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    int vowelCount = countVowels(str);
    int consonantCount = countConsonants(str);

    printf("Vowels: %d\n", vowelCount);
    printf("Consonants: %d\n", consonantCount);

    return 0;
}
