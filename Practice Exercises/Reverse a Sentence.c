#include <stdio.h>
#include <string.h>

void reverseSentence(char *sentence) {
    char *word;
    word = strtok(sentence, " ");
    
    if (word != NULL) {
        reverseSentence(NULL);
        printf("%s ", word);
    }
}

int main() {
    char sentence[1000];

    printf("Enter a sentence: ");
    gets(sentence);

    printf("Reversed sentence: ");
    reverseSentence(sentence);
    printf("\n");

    return 0;
}
