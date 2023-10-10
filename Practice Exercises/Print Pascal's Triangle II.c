#include <stdio.h>

int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

void printPascalsTriangle(int numRows) {
    for (int line = 0; line < numRows; line++) {
        for (int space = 0; space < numRows - line - 1; space++) {
            printf(" ");
        }
        for (int i = 0; i <= line; i++) {
            printf("%d ", binomialCoefficient(line, i));
        }
        printf("\n");
    }
}

int main() {
    int numRows;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &numRows);

    printPascalsTriangle(numRows);

    return 0;
}
