# include <stdio.h>

void findWaitingTime(int n, int burstTime[], int waitingTime[], int arrivalTime[]) 
{ 
	int serviceTime[n]; 
	serviceTime[0] = 0; 
	waitingTime[0] = 0; 

	//Calculating Waiting time 
	for (int i = 1; i < n ; i++) 
	{ 
		// Add burst time of previous Processes 
		serviceTime[i] = serviceTime[i - 1] + burstTime[i - 1]; 

		waitingTime[i] = serviceTime[i] - arrivalTime[i]; 

		// If waiting time for a Process is in negative that means it is already in the ready queue before CPU becomes idle so its waiting time is 0 
		if (waitingTime[i] < 0) 
			waitingTime[i] = 0; 
	} 
} 

void findTurnAroundTime(int n, int burstTime[], int waitingTime[], int turnAroundTime[]) 
{ 
	for (int i = 0; i < n ; i++) 
		turnAroundTime[i] = burstTime[i] + waitingTime[i]; 
} 

// Function to calculate average waiting and turn-around times. 
void findAverageTime(int n, int burstTime[], int arrivalTime[]) 
{ 
	int waitingTime[n], turnAroundTime[n]; 

	// Function to find waiting time of all Processes 
	findWaitingTime(n, burstTime, waitingTime, arrivalTime); 

	// Function to find turn around time for all Processes 
	findTurnAroundTime(n, burstTime, waitingTime, turnAroundTime); 

  printf("\nProcess\t\tBurst Time\tArrival Time\tWaiting Time\tTurn-Around Time\tCompletion Time");
	float averageWaitingTime = 0, averageTurnaroundTime = 0; 
	
  for (int i = 0 ; i < n ; i++) 
	{ 
		averageWaitingTime += waitingTime[i]; 
		averageTurnaroundTime += turnAroundTime[i]; 
		int completionTime = turnAroundTime[i] + arrivalTime[i]; 
    printf("\nP[%d]\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d", i + 1, burstTime[i], arrivalTime[i], waitingTime[i], turnAroundTime[i], completionTime);
	} 

  averageWaitingTime /= n;
  averageTurnaroundTime /= n;
	printf("\n\nAverage Waiting Time : %.2f", averageWaitingTime);
  printf("\nAverage Turnaround Time : %.2f", averageTurnaroundTime);
} 

int main() 
{ 
  int n;
  printf("Enter the total number of processes : ");
  scanf("%d", &n);

  int burstTime[n], arrivalTime[n];
  printf("\nEnter Burst Time And Arrival Time for each process:-\n");
  
  for (int i = 0; i < n; i++)
  {
    printf("P[%d] : ", i + 1);
    printf("\nBurst Time : ");
    scanf("%d", &burstTime[i]);
    printf("Arrival Time : ");
    scanf("%d", &arrivalTime[i]);
  }

	findAverageTime(n, burstTime, arrivalTime); 

	return 0; 
} 
