#include <stdio.h>

int main()
{
      int n;
      printf("\nEnter the Total Number of Processes : ");
      scanf("%d", &n);
      int arrivalTime[n], burstTime[n], Temp[n];
      int i, Smallest, Count = 0, Time;
      double waitTime = 0, turnAroundTime = 0, end;
      double averageWaitTime, averageTurnaroundTime;
      printf("\nEnter Details of the %d Processes : ", n);
      for (i = 0; i < n; i++)
      {
            printf("\nEnter Arrival Time : ");
            scanf("%d", &arrivalTime[i]);
            printf("Enter Burst Time : ");
            scanf("%d", &burstTime[i]);
            Temp[i] = burstTime[i];
      }
      burstTime[9] = 9999;
      for (Time = 0; Count != n; Time++)
      {
            Smallest = 9;
            for (i = 0; i < n; i++)
            {
                  if (arrivalTime[i] <= Time && burstTime[i] < burstTime[Smallest] && burstTime[i] > 0)
                  {
                        Smallest = i;
                  }
            }
            burstTime[Smallest]--;
            if (burstTime[Smallest] == 0)
            {
                  Count++;
                  end = Time + 1;
                  waitTime = waitTime + end - arrivalTime[Smallest] - Temp[Smallest];
                  turnAroundTime = turnAroundTime + end - arrivalTime[Smallest];
            }
      }
      averageWaitTime = waitTime / n;
      averageTurnaroundTime = turnAroundTime / n;
      printf("\nAverage Waiting Time : %.2f\n", averageWaitTime);
      printf("Average Turnaround Time : %.2f\n", averageTurnaroundTime);
      return 0;
}
