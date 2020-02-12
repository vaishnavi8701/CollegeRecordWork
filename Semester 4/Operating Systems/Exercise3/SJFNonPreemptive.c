#include <stdio.h>
int main()
{
  int n;
  printf("Enter number of processes : ");
  scanf("%d", &n);

  int burstTime[n], P[n], waitTime[n], turnAroundTime[n], i, j, Total = 0, Pos, temp;
  float averageWaitTime, averageTurnAroundTime;

  printf("\nEnter Burst Time :-\n");
  for (i = 0; i < n; i++)
  {
    printf("P[%d] : ", i + 1);
    scanf("%d", &burstTime[i]);
    P[i] = i + 1;
  }

  //sorting of burst times
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

  waitTime[0] = 0;

  for (i = 1; i < n; i++)
  {
    waitTime[i] = 0;
    for (j = 0; j < i; j++)
      waitTime[i] += burstTime[j];

    Total += waitTime[i];
  }

  averageWaitTime = (float)Total / n;
  Total = 0;

  printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
  for (i = 0; i < n; i++)
  {
    turnAroundTime[i] = burstTime[i] + waitTime[i];
    Total += turnAroundTime[i];
    printf("\nP[%d]\t\t%d\t\t%d\t\t%d", P[i], burstTime[i], waitTime[i], turnAroundTime[i]);
  }

  averageTurnAroundTime = (float)Total / n;
  printf("\n\nAverage Waiting Time = %.2f", averageWaitTime);
  printf("\nAverage Turnaround Time = %.2f\n", averageTurnAroundTime);
}
