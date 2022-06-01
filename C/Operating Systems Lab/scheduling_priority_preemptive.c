// Priority Scheduling Pre-emptive
// Akshit Gandotra

#include <stdio.h>
#include <conio.h>

void main() {
    // variable declarations
    int burstTime[20], ArrivalTime[10], n, i, j, temp, priority[10], start[10], finish[10], WaitTime[10], TAT[10];
    int totalTAT = 0, totalWT = 0;
    float pointAT, AvgWT, AvgTAT;

    printf("Enter the number of process: ");  // user input process details
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter Arrival Time, Burst Time & priority:\n");
        scanf("%d %d %d", &ArrivalTime[i], &burstTime[i], &priority[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (priority[i] < priority[j]) {  // sorting on basis of priority
                temp = priority[i];
                priority[i] = priority[j];
                priority[j] = temp;
                temp = ArrivalTime[i];
                ArrivalTime[i] = ArrivalTime[j];
                ArrivalTime[j] = temp;
                temp = burstTime[i];
                burstTime[i] = burstTime[j];
                burstTime[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++) {
        if (i == 0) {  // calculate TAT and WT
            start[i] = ArrivalTime[i];
            WaitTime[i] = start[i] - ArrivalTime[i];
            finish[i] = start[i] + burstTime[i];
            TAT[i] = finish[i] - ArrivalTime[i];
        } else {
            start[i] = finish[i - 1];
            WaitTime[i] = start[i] - ArrivalTime[i];
            finish[i] = start[i] + burstTime[i];
            TAT[i] = finish[i] - ArrivalTime[i];
        }
        totalTAT += WaitTime[i];  // calculate total Turn Around Time
        totalWT += TAT[i];  // calculate total Wait Time
    }

    // calculate average TAT and WT
    AvgWT = (float)totalTAT / n;
    AvgTAT = (float)totalWT / n;

    // display results
    printf("\nArrival Time\tBurst Time\tPriority\tWaiting Time\tTA Time");

    for (i = 0; i < n; i++)
        printf("\n%5d\t\t%5d\t\t%5d\t\t%5d\t\t%5d", ArrivalTime[i], burstTime[i], priority[i], WaitTime[i], TAT[i]);

    printf("\nAverage Waiting Time     : %f", AvgWT);
    printf("\nAverage Turnaround Time  : %f", AvgTAT);
}