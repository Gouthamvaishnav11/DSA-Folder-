#include <stdio.h>

int main() {
    int at[10], bt[10], rbt[10], wt[10], tat[10], ct[10];
    int n, complete = 0, t = 0, min = 9999, shortest = 0;
    float avg_wt = 0, avg_tat = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter arrival time and burst time for P%d: ", i + 1);
        scanf("%d%d", &at[i], &bt[i]);
        rbt[i] = bt[i];
    }

    while (complete != n) {
        min = 9999;
        int found = 0;

        for (int i = 0; i < n; i++) {
            if (at[i] <= t && rbt[i] > 0 && rbt[i] < min) {
                min = rbt[i];
                shortest = i;
                found = 1;
            }
        }

        if (!found) {
            t++;
            continue;
        }

        rbt[shortest]--;

        if (rbt[shortest] == 0) {
            complete++;
            int finish = t + 1;
            ct[shortest] = finish;
            tat[shortest] = finish - at[shortest];
            wt[shortest] = tat[shortest] - bt[shortest];
            avg_wt += wt[shortest];
            avg_tat += tat[shortest];
        }

        t++;
    }

    printf("\nProcess\tAT\tBT\tWT\tTAT\tCT\n");
    for (int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n",
               i + 1, at[i], bt[i], wt[i], tat[i], ct[i]);
    }

    printf("\nAverage Waiting Time : %.2f", avg_wt / n);
    printf("\nAverage Turnaround Time : %.2f\n", avg_tat / n);

    return 0;
}
