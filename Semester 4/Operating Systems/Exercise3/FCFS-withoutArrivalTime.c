#include <stdio.h>

int main()
{
  // Read Number Of Processes
  int n;
  printf("Enter the total number of processes : ");
  scanf("%d", &n);

  // Create arrays of size n for waiting time, burst time and turn around time
  int burstTime[n], waitingTime[n], turnAroundTime[n], i, j;
  float averageWaitingTime = 0, averageTurnAroundTime = 0;

  // Accept burst time for each process
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

  averageWaitingTime /= n;
  averageTurnAroundTime /= n;
  printf("\n\nAverage Waiting Time : %.2f", averageWaitingTime);
  printf("\nAverage Turnaround Time : %.2f", averageTurnAroundTime);

  return 0;
}
