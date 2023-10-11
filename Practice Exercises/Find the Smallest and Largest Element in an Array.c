#include <stdio.h>

void findSmallestAndLargest(int arr[], int n) {
    int smallest = arr[0];
    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest)
            smallest = arr[i];
        if (arr[i] > largest)
            largest = arr[i];
    }

    printf("Smallest element: %d\n", smallest);
    printf("Largest element: %d\n", largest);
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findSmallestAndLargest(arr, n);

    return 0;
}
