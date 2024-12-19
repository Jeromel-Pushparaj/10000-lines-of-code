#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Structure for Binary Heap
typedef struct {
    int *array;
    int size;
    int capacity;
} BinaryHeap;

// Function prototypes
BinaryHeap* createHeap(int capacity);
void insert(BinaryHeap *heap, int key);
void heapifyUp(BinaryHeap *heap, int index);
int extractMin(BinaryHeap *heap);
void heapifyDown(BinaryHeap *heap, int index);
void printHeap(BinaryHeap *heap);

int main() {
    BinaryHeap *heap = createHeap(MAX_SIZE);

    // Insert elements into the heap
    insert(heap, 3);
    insert(heap, 2);
    insert(heap, 1);
    insert(heap, 15);
    insert(heap, 5);
    insert(heap, 4);
    insert(heap, 45);

    printf("Min-Heap: ");
    printHeap(heap);

    // Extract the minimum element from the heap
    printf("Extracted min element: %d\n", extractMin(heap));

    printf("Min-Heap after extraction: ");
    printHeap(heap);

    return 0;
}

// Function to create a new Binary Heap
BinaryHeap* createHeap(int capacity) {
    BinaryHeap *heap = (BinaryHeap*)malloc(sizeof(BinaryHeap));
    if (heap == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    heap->capacity = capacity;
    heap->size = 0;
    heap->array = (int*)malloc(heap->capacity * sizeof(int));
    if (heap->array == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    return heap;
}

// Function to insert a new key into the heap
void insert(BinaryHeap *heap, int key) {
    if (heap->size == heap->capacity) {
        printf("Heap overflow\n");
        return;
    }

    // Insert the new key at the end
    heap->size++;
    int index = heap->size - 1;
    heap->array[index] = key;

    // Fix the min-heap property
    heapifyUp(heap, index);
}

// Function to fix the min-heap property upwards from a given index
void heapifyUp(BinaryHeap *heap, int index) {
    int parent = (index - 1) / 2;
    while (index > 0 && heap->array[parent] > heap->array[index]) {
        // Swap the current node with its parent
        int temp = heap->array[parent];
        heap->array[parent] = heap->array[index];
        heap->array[index] = temp;
        // Move up to the parent
        index = parent;
        parent = (index - 1) / 2;
    }
}

// Function to extract the minimum element from the heap
int extractMin(BinaryHeap *heap) {
    if (heap->size <= 0)
        return -1; // Return an invalid value if the heap is empty

    if (heap->size == 1) {
        heap->size--;
        return heap->array[0];
    }

    // Store the minimum value, and remove it from the heap
    int min = heap->array[0];
    heap->array[0] = heap->array[heap->size - 1];
    heap->size--;

    // Fix the min-heap property
    heapifyDown(heap, 0);

    return min;
}

// Function to fix the min-heap property downwards from a given index
void heapifyDown(BinaryHeap *heap, int index) {
    int smallest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    // Check if left child is smaller than root
    if (left < heap->size && heap->array[left] < heap->array[smallest])
        smallest = left;

    // Check if right child is smaller than smallest so far
    if (right < heap->size && heap->array[right] < heap->array[smallest])
        smallest = right;

    // If smallest is not root, swap it with root
    if (smallest != index) {
        int temp = heap->array[index];
        heap->array[index] = heap->array[smallest];
        heap->array[smallest] = temp;
        // Recursively heapify the affected sub-tree
        heapifyDown(heap, smallest);
    }
}

// Function to print the elements of the heap
void printHeap(BinaryHeap *heap) {
    for (int i = 0; i < heap->size; i++)
        printf("%d ", heap->array[i]);
    printf("\n");
}
