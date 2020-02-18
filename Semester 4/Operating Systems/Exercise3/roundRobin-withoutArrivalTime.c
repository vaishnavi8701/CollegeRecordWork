#include <stdio.h>
int main(void)
{
  // Read number of processes
  int n;
  printf("\nEnter the number of processes : ");
  scanf("%d", &n);

  // Create array of size n for reading burst times
  int i, burstTime[n], turnAroundTime[n], waitingTime[n], remainingBurstTime[n], quantumTime;
  float averageWaitingTime = 0, averageTurnAroundTime = 0;
  printf("\nEnter the burst time for each process :- \n");
  for (i = 0; i < n; i++)
  {
    printf("P[%d] : ", i + 1);
    scanf("%d", &burstTime[i]);
  }

  // Read quantum time
  printf("\nEnter the time quantum : ");
  scanf("%d", &quantumTime);

  for (i = 0; i < n; i++)
    remainingBurstTime[i] = burstTime[i];

  int t = 0;

  while (1)
  {
    int completedProcess = 1;

    for (i = 0; i < n; i++)
    {
      if (remainingBurstTime[i] > 0)
      {
        completedProcess = 0;
        if (remainingBurstTime[i] > quantumTime)
        {
          t += quantumTime;
          remainingBurstTime[i] -= quantumTime;
        }
        else
        {
          t += remainingBurstTime[i];
          waitingTime[i] = t - burstTime[i];
          remainingBurstTime[i] = 0;
        }
      }
    }
    if (completedProcess == 1)
      break;
  }

  // Turnaround Time
  for (i = 0; i < n; i++)
  {
    turnAroundTime[i] = burstTime[i] + waitingTime[i];
  }

  //Calculate Average Time
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
