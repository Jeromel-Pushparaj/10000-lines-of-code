#include <stdio.h>

typedef struct {
    int processID;
    int arrivalTime;
    int burstTime;
    int priority;
    int waitingTime;
    int turnaroundTime;
} Process;

void sortProcessesByPriority(Process processes[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (processes[j].priority > processes[j + 1].priority) {
                Process temp = processes[j];
                processes[j] = processes[j + 1];
                processes[j + 1] = temp;
            }
        }
    }
}

void calculateWaitingAndTurnaroundTimes(Process processes[], int n) {
    int currentTime = 0;

    for (int i = 0; i < n; i++) {
        if (currentTime < processes[i].arrivalTime) {
            currentTime = processes[i].arrivalTime;
        }
        processes[i].waitingTime = currentTime - processes[i].arrivalTime;
        processes[i].turnaroundTime = processes[i].waitingTime + processes[i].burstTime;
        currentTime += processes[i].burstTime;
    }
}

void printResults(Process processes[], int n) {
    printf("Process\tArrival Time\tBurst Time\tPriority\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++) {
        printf("P%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",
               processes[i].processID, processes[i].arrivalTime,
               processes[i].burstTime, processes[i].priority,
               processes[i].waitingTime, processes[i].turnaroundTime);
    }
}

float calculateAverageTime(int times[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += times[i];
    }
    return (float)sum / n;
}

int main() {
    Process processes[] = {
        {0, 0, 4, 2, 0, 0},
        {1, 1, 2, 3, 0, 0},
        {2, 2, 7, 4, 0, 0},
        {3, 3, 3, 1, 0, 0}
    };
    int n = sizeof(processes) / sizeof(processes[0]);

    sortProcessesByPriority(processes, n);
    calculateWaitingAndTurnaroundTimes(processes, n);

    int waitingTimes[n], turnaroundTimes[n];
    for (int i = 0; i < n; i++) {
        waitingTimes[i] = processes[i].waitingTime;
        turnaroundTimes[i] = processes[i].turnaroundTime;
    }

    printResults(processes, n);

    printf("Average Waiting Time: %.2f\n", calculateAverageTime(waitingTimes, n));
    printf("Average Turnaround Time: %.2f\n", calculateAverageTime(turnaroundTimes, n));

    return 0;
}
