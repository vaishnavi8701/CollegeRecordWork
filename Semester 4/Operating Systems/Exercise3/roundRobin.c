















































































































































































































































#include <stdio.h>

int main()
{
      int arrivalTime[10], burstTime[10], Temp[10];
      int i, Smallest, Count = 0, Time, n;
      double waitTime = 0, turnAroundTime = 0, end;
      double averageWaitTime, averageTurnaroundTime;
      printf("\nEnter the Total Number of Processes : ");
      scanf("%d", &n);
      printf("\nEnter Details of the %d Processes : ", n);
      for(i = 0; i < n; i++)
      {
            printf("\nEnter Arrival Time : ");
            scanf("%d", &arrivalTime[i]);
            printf("Enter Burst Time : ");
            scanf("%d", &burstTime[i]);
            Temp[i] = burstTime[i];
      }
      burstTime[9] = 9999;
      for(Time = 0; Count != n; Time++)
      {
            Smallest = 9;
            for(i = 0; i < n; i++)
            {
                  if(arrivalTime[i] <= Time && burstTime[i] < burstTime[Smallest
] && burstTime[i] > 0)
                  {
                        Smallest = i;
                  }
            }
            burstTime[Smallest]--;
            if(burstTime[Smallest] == 0)
{
                  Count++;
                  end = Time + 1;
                  waitTime = waitTime + end - arrivalTime[Smallest] - Temp[Small
est];
                  turnAroundTime = turnAroundTime + end - arrivalTime[Smallest];
            }
      }
      averageWaitTime = waitTime / n;
      averageTurnaroundTime = turnAroundTime / n;
      printf("\nAverage Waiting Time : %.2f\n", averageWaitTime);
      printf("Average Turnaround Time : %.2f\n", averageTurnaroundTime);
      return 0;
}















































































































































































































































#include <stdio.h>

int main()
{
      int arrivalTime[10], burstTime[10], Temp[10];
      int i, Smallest, Count = 0, Time, n;
      double waitTime = 0, turnAroundTime = 0, end;
      double averageWaitTime, averageTurnaroundTime;
      printf("\nEnter the Total Number of Processes : ");
      scanf("%d", &n);
      printf("\nEnter Details of the %d Processes : ", n);
      for(i = 0; i < n; i++)
      {
            printf("\nEnter Arrival Time : ");
            scanf("%d", &arrivalTime[i]);
            printf("Enter Burst Time : ");
            scanf("%d", &burstTime[i]);
            Temp[i] = burstTime[i];
      }
      burstTime[9] = 9999;
      for(Time = 0; Count != n; Time++)
      {
            Smallest = 9;
            for(i = 0; i < n; i++)
            {
                  if(arrivalTime[i] <= Time && burstTime[i] < burstTime[Smallest
] && burstTime[i] > 0)
                  {
                        Smallest = i;
                  }
            }
            burstTime[Smallest]--;
            if(burstTime[Smallest] == 0)
{
                  Count++;
                  end = Time + 1;
                  waitTime = waitTime + end - arrivalTime[Smallest] - Temp[Small
est];
                  turnAroundTime = turnAroundTime + end - arrivalTime[Smallest];
            }
      }
      averageWaitTime = waitTime / n;
      averageTurnaroundTime = turnAroundTime / n;
      printf("\nAverage Waiting Time : %.2f\n", averageWaitTime);
      printf("Average Turnaround Time : %.2f\n", averageTurnaroundTime);
      return 0;
}
