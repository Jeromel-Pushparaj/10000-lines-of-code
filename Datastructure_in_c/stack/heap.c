#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int *array;
    int size;
    int capacity;
} MaxHeap;

MaxHeap* createHeap(int capacity);
void insert(MaxHeap *heap, int key);
int extractMax(MaxHeap *heap);
void maxHeapify(MaxHeap *heap, int index);
void printHeap(MaxHeap *heap);

int main() {
    MaxHeap *heap = createHeap(MAX_SIZE);
    insert(heap, 10);
    insert(heap, 20);
    insert(heap, 5);
    insert(heap, 15);
    printf("Max-Heap after insertions:\n");
    printHeap(heap);
    printf("Extracted max element: %d\n", extractMax(heap));
    printf("Max-Heap after extraction:\n");
    printHeap(heap);
    return 0;
}

MaxHeap* createHeap(int capacity) {
    MaxHeap *heap = (MaxHeap*)malloc(sizeof(MaxHeap));
    heap->capacity = capacity;
    heap->size = 0;
    heap->array = (int*)malloc(heap->capacity * sizeof(int));
    return heap;
}

void insert(MaxHeap *heap, int key) {
    if (heap->size == heap->capacity) {
        printf("Heap overflow\n");
        return;
    }
    heap->size++;
    int index = heap->size - 1;
    heap->array[index] = key;
    while (index > 0 && heap->array[(index - 1) / 2] < heap->array[index]) {
        int temp = heap->array[index];
        heap->array[index] = heap->array[(index - 1) / 2];
        heap->array[(index - 1) / 2] = temp;
        index = (index - 1) / 2;
    }
}

int extractMax(MaxHeap *heap) {
    if (heap->size <= 0)
        return -1;
    if (heap->size == 1) {
        heap->size--;
        return heap->array[0];
    }
    int max = heap->array[0];
    heap->array[0] = heap->array[heap->size - 1];
    heap->size--;
    maxHeapify(heap, 0);
    return max;
}

void maxHeapify(MaxHeap *heap, int index) {
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    if (left < heap->size && heap->array[left] > heap->array[largest])
        largest = left;
    if (right < heap->size && heap->array[right] > heap->array[largest])
        largest = right;
    if (largest != index) {
        int temp = heap->array[index];
        heap->array[index] = heap->array[largest];
        heap->array[largest] = temp;
        maxHeapify(heap, largest);
    }
}

void printHeap(MaxHeap *heap) {
    for (int i = 0; i < heap->size; i++)
        printf("%d ", heap->array[i]);
    printf("\n");
}
