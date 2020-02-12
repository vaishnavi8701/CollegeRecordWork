#include <stdio.h>

int main()
{
  int arrivalTime[10], burstTime[10], temp[10];
  int i, smallest, count = 0, time, Limit;
  double waitTime = 0, turnAroundTime = 0, end;
  float averageWaitingTime, averageTurnaroundTime;

  printf("\nEnter the total number of processes : ");
  scanf("%d", &Limit);

  printf("\nEnter Details of %d Processes\n", Limit);
  for (i = 0; i < Limit; i++)
  {
    printf("\nEnter Arrival Time : ");
    scanf("%d", &arrivalTime[i]);
    printf("Enter Burst Time : ");
    scanf("%d", &burstTime[i]);
    temp[i] = burstTime[i];
  }

  burstTime[9] = 9999;
  for (time = 0; count != Limit; time++)
  {
    smallest = 9;
    for (i = 0; i < Limit; i++)
    {
      if (arrivalTime[i] <= time && burstTime[i] < burstTime[smallest] && burstTime[i] > 0)
      {
        smallest = i;
      }
    }
    burstTime[smallest]--;
    if (burstTime[smallest] == 0)
    {
      count++;
      end = time + 1;
      waitTime = waitTime + end - arrivalTime[smallest] - temp[smallest];
      turnAroundTime = turnAroundTime + end - arrivalTime[smallest];
    }
  }

  averageWaitingTime = waitTime / Limit;
  averageTurnaroundTime = turnAroundTime / Limit;
  printf("nnAverage Waiting Time:t%lfn", averageWaitingTime);
  printf("Average Turnaround Time:t%lfn", averageTurnaroundTime);
  return 0;
}
