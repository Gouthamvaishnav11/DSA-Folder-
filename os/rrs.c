#include <stdio.h>

int main() {
    int n, i, j, time, remain, flag = 0, timeQuantum;
    int at[10], bt[10], rt[10]; // Arrival, Burst, Remaining time
    int wt = 0, tat = 0;
    float avgWT, avgTAT;

    printf("Enter Total Number of Processes: ");
    scanf("%d", &n);
    remain = n;

    for (i = 0; i < n; i++) {
        printf("\nEnter Arrival Time and Burst Time for Process[%d]:\n", i + 1);
        printf("Arrival Time: ");
        scanf("%d", &at[i]);
        printf("Burst Time: ");
        scanf("%d", &bt[i]);
        rt[i] = bt[i];
    }

    printf("\nEnter Time Quantum: ");
    scanf("%d", &timeQuantum);

    printf("\nProcess\tArrival\tBurst\tWaiting\tTurnaround\n");

    for (time = 0, i = 0; remain != 0;) {
        if (rt[i] <= timeQuantum && rt[i] > 0) {
            time += rt[i];
            rt[i] = 0;
            flag = 1;
        } else if (rt[i] > 0) {
            rt[i] -= timeQuantum;
            time += timeQuantum;
        }

        if (rt[i] == 0 && flag == 1) {
            remain--;
            int waiting = time - at[i] - bt[i];
            int turnaround = time - at[i];
            printf("P[%d]\t%d\t%d\t%d\t%d\n", i + 1, at[i], bt[i], waiting, turnaround);

            wt += waiting;
            tat += turnaround;
            flag = 0;
        }

        // Move to next process if arrived
        if (i == n - 1)
            i = 0;
        else if (at[i + 1] <= time)
            i++;
        else
            i = 0;
    }

    avgWT = (float) wt / n;
    avgTAT = (float) tat / n;

    printf("\nAverage Waiting Time: %.2f", avgWT);
    printf("\nAverage Turnaround Time: %.2f\n", avgTAT);

    return 0;
}
