#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    int vowels = 0, consonants = 0;
    
    printf("Enter a sentence: ");
    gets(sentence);
    
    for (int i = 0; sentence[i] != '\0'; i++) {
        char ch = tolower(sentence[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    
    return 0;
}
