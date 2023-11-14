#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Queue {
    struct Node* front;
    struct Node* rear;
};

void enqueue(struct Queue* queue, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (queue->rear == NULL) {
        queue->front = newNode;
        queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

int dequeue(struct Queue* queue) {
    if (queue->front == NULL) {
        printf("Queue is empty.\n");
        return -1; // Assuming -1 represents an error or empty queue
    }

    struct Node* temp = queue->front;
    int value = temp->data;

    queue->front = temp->next;
    if (queue->front == NULL) {
        queue->rear = NULL;
    }

    free(temp);
    return value;
}

int main() {
    struct Queue queue = {NULL, NULL};

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    printf("Dequeued element: %d\n", dequeue(&queue));

    // Free memory...
    return 0;
}
