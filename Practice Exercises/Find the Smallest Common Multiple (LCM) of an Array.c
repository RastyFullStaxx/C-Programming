#include <stdio.h>

int findLCM(int a, int b) {
    int max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0)
            return max;
        max++;
    }
}

int findSmallestCommonMultiple(int arr[], int n) {
    int lcm = arr[0];

    for (int i = 1; i < n; i++) {
        lcm = findLCM(lcm, arr[i]);
    }

    return lcm;
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int smallestCommonMultiple = findSmallestCommonMultiple(arr, n);

    printf("Smallest common multiple of the array elements: %d\n", smallestCommonMultiple);

    return 0;
}
