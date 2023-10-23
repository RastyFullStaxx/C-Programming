#include <stdio.h>
#include <stdbool>

bool isUlamNumber(int num) {
    if (num < 4)
        return false;

    int count = 0;

    for (int i = 1; i < num; i++) {
        for (int j = i + 1; j <= num; j++) {
            if (i + j == num) {
                count++;
                if (count > 1)
                    return false;
            }
        }
    }

    return count == 1;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isUlamNumber(num))
        printf("%d is an Ulam number.\n", num);
    else
        printf("%d is not an Ulam number.\n", num);

    return 0;
}
