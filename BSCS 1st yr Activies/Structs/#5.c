#include <stdio.h>
#include <string.h>

void sortStringArray(char arr[][35], int size) {
    char temp[35];
    
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main() {
    char strings[][35] = {"ba", "ako", "kain", "patatas"};
    int size = sizeof(strings) / sizeof(strings[0]);
    
    printf("==============================\n");
    printf("Before sorting the string array:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", strings[i]);
    } printf("==============================");
    
    sortStringArray(strings, size);
    
    printf("\n\n==============================\n");
    printf("After sorting the string array in ascending order:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", strings[i]);
    }printf("==============================");
    
    printf("\n\n\n\n\n\n\n\n\n\n\n");

    return 0;
}
