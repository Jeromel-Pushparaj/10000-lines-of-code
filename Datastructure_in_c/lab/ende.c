#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

typedef struct {
    int items[MAX_SIZE];
    int front, rear;
} CircularQueue;

// Function prototypes
void initializeQueue(CircularQueue *q);
int isFull(CircularQueue *q);
int isEmpty(CircularQueue *q);
void enqueue(CircularQueue *q, int value);
int dequeue(CircularQueue *q);
void printQueue(CircularQueue *q);

int main() {
    CircularQueue queue;
    initializeQueue(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);
    enqueue(&queue, 40);

    printf("Queue after enqueuing 10, 20, 30, 40: ");
    printQueue(&queue);

    dequeue(&queue);

    printf("Queue after dequeuing: ");
    printQueue(&queue);

    return 0;
}

void initializeQueue(CircularQueue *q) {
    q->front = -1;
    q->rear = -1;
}

int isFull(CircularQueue *q) {
    return ((q->rear + 1) % MAX_SIZE == q->front);
}

int isEmpty(CircularQueue *q) {
    return (q->front == -1);
}

void enqueue(CircularQueue *q, int value) {
    if (isFull(q)) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    }
    if (isEmpty(q))
        q->front = q->rear = 0;
    else
        q->rear = (q->rear + 1) % MAX_SIZE;
    
    q->items[q->rear] = value;
}

int dequeue(CircularQueue *q) {
    int dequeuedItem;
    if (isEmpty(q)) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    }

    dequeuedItem = q->items[q->front];
    if (q->front == q->rear)
        q->front = q->rear = -1;
    else
        q->front = (q->front + 1) % MAX_SIZE;
    
    return dequeuedItem;
}

void printQueue(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }
    
    int i;
    printf("[ ");
    for (i = q->front; i != q->rear; i = (i + 1) % MAX_SIZE)
        printf("%d, ", q->items[i]);
    printf("%d ]\n", q->items[i]);
}
