#include <stdio.h>

int main()
{
  //Read number of processes
  int n;
  printf("Enter the Total Number of Processes : ");
  scanf("%d", &n);

  //Create arrays for burst time, waiting time, turnaround time, priority of size n.
  int burstTime[n], Process[n], waitingTime[n], turnaroundTime[n], Priority[n];
  int i, j, Sum = 0, Pos, Temp;
  float totalWaitingTime = 0, totalTurnAroundTime = 0;

  // Read burst time and priority for each Process
  printf("\nEnter Burst Time and Priority For %d Processes\n", n);
  for (i = 0; i < n; i++)
  {
    printf("\nP[%d]\n", i + 1);
    printf("Process Burst Time : ");
    scanf("%d", &burstTime[i]);
    printf("Process Priority : ");
    scanf("%d", &Priority[i]);
    Process[i] = i + 1;
  }

  // Sort burst times in order of priority
  for (i = 0; i < n; i++)
  {
    Pos = i;
    for (j = i + 1; j < n; j++)
    {
      if (Priority[j] < Priority[Pos])
      {
        Pos = j;
      }
    }
    Temp = Priority[i];
    Priority[i] = Priority[Pos];
    Priority[Pos] = Temp;

    Temp = burstTime[i];
    burstTime[i] = burstTime[Pos];
    burstTime[Pos] = Temp;

    Temp = Process[i];
    Process[i] = Process[Pos];
    Process[Pos] = Temp;
  }

  waitingTime[0] = 0;
  for (i = 1; i < n; i++)
  {
    waitingTime[i] = 0;
    for (j = 0; j < i; j++)
    {
      waitingTime[i] += burstTime[j];
    }
    totalWaitingTime += waitingTime[i];
  }

  float averageWaitingTime = totalWaitingTime / n;
  printf("\nProcess ID\t\tBurst Time\t Waiting Time\t Turnaround Time");
  for (i = 0; i < n; i++)
  {
    turnaroundTime[i] = burstTime[i] + waitingTime[i];
    totalTurnAroundTime += turnaroundTime[i];
    printf("\nP[%d]\t\t\t%d\t\t %d\t\t %d", Process[i], burstTime[i], waitingTime[i], turnaroundTime[i]);
  }

  float averageTurnAroundTime = totalTurnAroundTime / n;
  printf("\n\nAverage Waiting Time : %.2f", averageWaitingTime);
  printf("\nAverage Turnaround Time : %.2f\n", averageTurnAroundTime);
  return 0;
}
