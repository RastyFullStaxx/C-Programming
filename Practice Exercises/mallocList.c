#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node* next;
};

int main() {
    struct Node* P;
    struct Node* Q;

    // Part 1
    P = (struct Node*)malloc(sizeof(struct Node));
    Q = (struct Node*)malloc(sizeof(struct Node));
    P->info = 5;
    Q->info = 6;
    P = Q;
    P->info = 1;
    printf("%d %d\n", P->info, Q->info);

    // Part 2
    P = (struct Node*)malloc(sizeof(struct Node));
    P->info = 3;
    Q = (struct Node*)malloc(sizeof(struct Node));
    Q->info = 2;
    P = (struct Node*)malloc(sizeof(struct Node));
    P->info = Q->info;
    Q->info = 0;
    printf("%d %d\n", P->info, Q->info);

    // Free allocated memory
    free(Q);
    free(P);

    return 0;
}
