#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPangram(char sentence[]) {
    bool visited[26] = {false};
    int index;

    for (int i = 0; sentence[i] != '\0'; i++) {
        if ('A' <= sentence[i] && sentence[i] <= 'Z') {
            index = sentence[i] - 'A';
        } else if ('a' <= sentence[i] && sentence[i] <= 'z') {
            index = sentence[i] - 'a';
        } else {
            continue;
        }

        visited[index] = true;
    }

    for (int i = 0; i < 26; i++) {
        if (!visited[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    char sentence[1000];

    printf("Enter a sentence: ");
    gets(sentence);

    if (isPangram(sentence)) {
        printf("The sentence is a pangram.\n");
    } else {
        printf("The sentence is not a pangram.\n");
    }

    return 0;
}
