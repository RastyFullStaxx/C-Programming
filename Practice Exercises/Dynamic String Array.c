#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    printf("Enter the number of strings: ");
    scanf("%d", &N);

    char** strings = (char**)malloc(N * sizeof(char*));
    for (int i = 0; i < N; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%ms", &strings[i]);
    }

    printf("You entered the following strings:\n");
    for (int i = 0; i < N; i++) {
        printf("%s\n", strings[i]);
        free(strings[i]);
    }

    free(strings);
    return 0;
}
