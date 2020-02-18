#include <stdio.h>
int main()
{
  // Read Number Of Processes
  int n;
  printf("Enter number of processes : ");
  scanf("%d", &n);

  // Create arrays of size n for waiting time, burst time and turn around time
  int burstTime[n], P[n], waitingTime[n], turnAroundTime[n], i, j, Pos, temp;
  float averageWaitingTime = 0, averageTurnAroundTime = 0;

  // Accept burst time for each process
  printf("\nEnter Burst Time :-\n");
  for (i = 0; i < n; i++)
  {
    printf("P[%d] : ", i + 1);
    scanf("%d", &burstTime[i]);
    P[i] = i + 1;
  }

  //Sorting of burst times
  for (i = 0; i < n; i++)
  {
    Pos = i;
    for (j = i + 1; j < n; j++)
    {
      if (burstTime[j] < burstTime[Pos])
        Pos = j;
    }

    temp = burstTime[i];
    burstTime[i] = burstTime[Pos];
    burstTime[Pos] = temp;

    temp = P[i];
    P[i] = P[Pos];
    P[Pos] = temp;
  }

  waitingTime[0] = 0;

  for (i = 1; i < n; i++)
  {
    waitingTime[i] = 0;
    for (j = 0; j < i; j++)
      waitingTime[i] += burstTime[j];

    averageWaitingTime += waitingTime[i];
  }

  averageWaitingTime = averageWaitingTime / n;

  printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
  for (i = 0; i < n; i++)
  {
    turnAroundTime[i] = burstTime[i] + waitingTime[i];
    averageTurnAroundTime += turnAroundTime[i];
    printf("\nP[%d]\t\t%d\t\t%d\t\t%d", P[i], burstTime[i], waitingTime[i], turnAroundTime[i]);
  }

  averageTurnAroundTime = averageTurnAroundTime / n;
  printf("\n\nAverage Waiting Time = %.2f", averageWaitingTime);
  printf("\nAverage Turnaround Time = %.2f\n", averageTurnAroundTime);
}
