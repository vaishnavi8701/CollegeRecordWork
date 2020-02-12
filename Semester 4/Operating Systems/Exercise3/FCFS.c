#include <stdio.h>

int main()
{
  int n;
  printf("Enter the total number of processes : ");
  scanf("%d", &n);

  int burstTime[n], waitingTime[n], turnAroundTime[n], i, j;
  float averageWaitingTime = 0, averageTurnAroundTime = 0;

  printf("\nEnter Burst Time for each process:-\n");
  for (i = 0; i < n; i++)
  {
    printf("P[%d] : ", i + 1);
    scanf("%d", &burstTime[i]);
  }

  waitingTime[0] = 0; //Waiting time for first process is 0

  //Calculating waiting time
  for (i = 1; i < n; i++)
  {
    waitingTime[i] = 0;
    for (j = 0; j < i; j++)
      waitingTime[i] += burstTime[j];
  }

  printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");

  //Calculating turnaround time
  for (i = 0; i < n; i++)
  {
    turnAroundTime[i] = burstTime[i] + waitingTime[i];
    averageWaitingTime += waitingTime[i];
    averageTurnAroundTime += turnAroundTime[i];
    printf("\nP[%d]\t\t%d\t\t%d\t\t%d", i + 1, burstTime[i], waitingTime[i], turnAroundTime[i]);
  }

  averageWaitingTime /= i;
  averageTurnAroundTime /= i;
  printf("\n\nAverage Waiting Time : %.2f", averageWaitingTime);
  printf("\nAverage Turnaround Time : %.2f", averageTurnAroundTime);

  return 0;
}
