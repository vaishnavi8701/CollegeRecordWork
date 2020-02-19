#include <stdio.h>
int main()
{
  int Max[10][10], need[10][10], alloc[10][10], avail[10], Completed[10], safeSequence[10];
  int n, r, i, j, Process, Count = 0;

  printf("Enter Total Number of Processes : ");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
    Completed[i] = 0;

  printf("\n\nEnter The Number Of Resources : ");
  scanf("%d", &r);
  printf("\n\nEnter the Max Matrix for each Process : ");

  for (i = 0; i < n; i++)
  {
    printf("\nFor Process %d : ", i + 1);
    for (j = 0; j < r; j++)
      scanf("%d", &Max[i][j]);
  }

  printf("\n\nEnter the allocation for each Process : ");
  for (i = 0; i < n; i++)
  {
    printf("\nFor Process %d : ", i + 1);
    for (j = 0; j < r; j++)
      scanf("%d", &alloc[i][j]);
  }

  printf("\n\nEnter the Available Resources : ");
  for (i = 0; i < r; i++)
    scanf("%d", &avail[i]);

  for (i = 0; i < n; i++)
    for (j = 0; j < r; j++)
      need[i][j] = Max[i][j] - alloc[i][j];

  do
  {
    printf("\n Max matrix:\tAllocation matrix:\n");

    for (i = 0; i < n; i++)
    {
      for (j = 0; j < r; j++)
        printf("%d  ", Max[i][j]);
      printf("\t\t");
      for (j = 0; j < r; j++)
        printf("%d  ", alloc[i][j]);
      printf("\n");
    }

    Process = -1;

    for (i = 0; i < n; i++)
    {
      if (Completed[i] == 0) //if not Completed
      {
        Process = i;
        for (j = 0; j < r; j++)
        {
          if (avail[j] < need[i][j])
          {
            Process = -1;
            break;
          }
        }
      }
      if (Process != -1)
        break;
    }

    if (Process != -1)
    {
      printf("\nProcess %d runs to completion!", Process + 1);
      safeSequence[Count] = Process + 1;
      Count++;
      for (j = 0; j < r; j++)
      {
        avail[j] += alloc[Process][j];
        alloc[Process][j] = 0;
        Max[Process][j] = 0;
        Completed[Process] = 1;
      }
    }
  } while (Count != n && Process != -1);

  if (Count == n)
  {
    printf("\nThe system is in a safe state.\n");
    printf("Safe Sequence : < ");
    for (i = 0; i < n; i++)
      printf("%d  ", safeSequence[i]);
    printf(">\n");
  }
  else
  {
    printf("\nThe system is in an unsafe state.");
  }
}
