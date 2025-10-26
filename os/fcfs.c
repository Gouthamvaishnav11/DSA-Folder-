#include <stdio.h>

// Function to calculate waiting time of all processes
void find_wait_time(int processes[], int size, int burst_time[], int arrival_time[], int wait_time[]) {
    int service_time[size];
    service_time[0] = arrival_time[0];
    wait_time[0] = 0;

    for (int i = 1; i < size; i++) {
        service_time[i] = service_time[i - 1] + burst_time[i - 1];
        wait_time[i] = service_time[i] - arrival_time[i];

        if (wait_time[i] < 0) {
            wait_time[i] = 0;
            service_time[i] = arrival_time[i];
        }
    }
}

// Function to calculate average waiting time
void find_avg_wait_time(int processes[], int size, int burst_time[], int arrival_time[]) {
    int wait_time[size];
    int total_wt = 0;

    find_wait_time(processes, size, burst_time, arrival_time, wait_time);

    printf("\nProcess\tArrival Time\tBurst Time\tWaiting Time\n");
    printf("-------------------------------------------------\n");

    for (int i = 0; i < size; i++) {
        total_wt += wait_time[i];
        printf("%d\t\t%d\t\t%d\t\t%d\n", processes[i], arrival_time[i], burst_time[i], wait_time[i]);
    }

    float avg_wt = (float)total_wt / size;
    printf("\nAverage Waiting Time: %.2f\n", avg_wt);
}

int main() {
    int n;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    int processes[n], arrival_time[n], burst_time[n];

    // Taking input from user
    for (int i = 0; i < n; i++) {
        processes[i] = i + 1;
        printf("\nEnter Arrival Time for Process %d: ", processes[i]);
        scanf("%d", &arrival_time[i]);
        printf("Enter Burst Time for Process %d: ", processes[i]);
        scanf("%d", &burst_time[i]);
    }

    // Call function to calculate and display results
    find_avg_wait_time(processes, n, burst_time, arrival_time);

    return 0;
}
