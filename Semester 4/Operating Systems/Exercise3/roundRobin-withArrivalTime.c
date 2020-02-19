#include <stdio.h>
int main()
{
  int n;
  printf("Enter the Total number of processes : ");
  scanf("%d", &n);

  int i, burstTime[n], arrivalTime[n], timeQuantum, Temp[n], Counter = 0, Total = 0;
  float averageWaitingTime = 0, averageTurnaroundTime = 0;
  printf("\nEnter Burst Time And Arrival Time for each process:-\n");

  int x = n;
  for (i = 0; i < n; i++)
  {
    printf("\nP[%d]", i + 1);
    printf("\nArrival Time : ");
    scanf("%d", &arrivalTime[i]);
    printf("Burst Time : ");
    scanf("%d", &burstTime[i]);
    Temp[i] = burstTime[i];
  }

  printf("\nEnter Time Quantum : ");
  scanf("%d", &timeQuantum);
  printf("\nProcess\t\tArrival Time\tBurst Time\tWaiting Time\tTurn-Around Time");

  for (Total = 0, i = 0; x != 0;)
  {
    if (Temp[i] <= timeQuantum && Temp[i] > 0)
    {
      Total = Total + Temp[i];
      Temp[i] = 0;
      Counter = 1;
    }
    else if (Temp[i] > 0)
    {
      Temp[i] = Temp[i] - timeQuantum;
      Total = Total + timeQuantum;
    }
    if (Temp[i] == 0 && Counter == 1)
    {
      x--;
      printf("\nP[%d]\t\t%d\t\t%d\t\t%d\t\t%d", i + 1, arrivalTime[i], burstTime[i], Total - arrivalTime[i] - burstTime[i], Total - arrivalTime[i]);
      averageWaitingTime += (Total - arrivalTime[i] - burstTime[i]);
      averageTurnaroundTime += (Total - arrivalTime[i]);
      Counter = 0;
    }

    if (i == n - 1)
    {
      i = 0;
    }
    else if (arrivalTime[i + 1] <= Total)
    {
      i++;
    }
    else
    {
      i = 0;
    }
  }

  averageWaitingTime = averageWaitingTime / n;
  averageTurnaroundTime = averageTurnaroundTime / n;

  printf("\n\nAverage Waiting Time : %.2f", averageWaitingTime);
  printf("\nAverage Turnaround Time : %.2f", averageTurnaroundTime);
  return 0;
}
