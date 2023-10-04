#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

float findMedian(int arr[], int n) {
    if (n % 2 == 0) {
        int middle1 = arr[n / 2 - 1];
        int middle2 = arr[n / 2];
        return (float)(middle1 + middle2) / 2;
    } else {
        return (float)arr[n / 2];
    }
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d",
