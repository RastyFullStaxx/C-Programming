#include <stdio.h>

int main() {
    int n, max, min;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Largest element: %d\n", max);
    printf("Smallest element: %d\n", min);

    return 0;
}
