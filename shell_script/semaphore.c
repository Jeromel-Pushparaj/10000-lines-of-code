#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

sem_t semaphore;

void* threadFunction(void* arg) {
    // Wait
    sem_wait(&semaphore);
    printf("Entered critical section in thread %ld\n", (long)arg);

    // Critical section
    sleep(2);

    // Signal
    printf("Exiting critical section in thread %ld\n", (long)arg);
    sem_post(&semaphore);

    return NULL;
}

int main() {
    pthread_t threads[3];

    // Initialize semaphore
    sem_init(&semaphore, 0, 1);

    // Create threads
    for (long i = 0; i < 3; i++) {
        pthread_create(&threads[i], NULL, threadFunction, (void*)i);
    }

    // Join threads
    for (int i = 0; i < 3; i++) {
        pthread_join(threads[i], NULL);
    }

    // Destroy semaphore
    sem_destroy(&semaphore);

    return 0;
}
