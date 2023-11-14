#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int* arr = (int*)malloc(N * sizeof(int));

    printf("Enter %d elements:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered the following elements:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
