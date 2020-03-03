#include <stdio.h>

int findLRU(int Time[], int n)
{
  int i, Minimum = Time[0], Pos = 0;
  for (i = 1; i < n; i++)
  {
    if (Time[i] < Minimum)
    {
      Minimum = Time[i];
      Pos = i;
    }
  }
  return Pos;
}

int main()
{
  int numOfFrames, numOfPages, Frames[10], Pages[30], Counter = 0, Time[10], Flag1, Flag2, i, j, Pos, Faults = 0;

  printf("Enter number of Pages : ");
  scanf("%d", &numOfPages);

  printf("Enter reference string : ");
  for (i = 0; i < numOfPages; i++)
    scanf("%d", &Pages[i]);

  printf("Enter number of Frames in Memory : ");
  scanf("%d", &numOfFrames);

  for (i = 0; i < numOfFrames; i++)
  {
    Frames[i] = -1;
  }

  printf("\nPages\t Page Allocated to Frame\n\n");
  for (i = 0; i < numOfPages; i++)
  {
    printf("%d\t ", Pages[i]);

    Flag1 = Flag2 = 0;
    for (j = 0; j < numOfFrames; j++)
    {
      if (Frames[j] == Pages[i])
      {
        Counter++;
        Time[j] = Counter;
        Flag1 = Flag2 = 1;
        break;
      }
    }

    if (Flag1 == 0)
    {
      for (j = 0; j < numOfFrames; j++)
      {
        if (Frames[j] == -1)
        {
          Counter++;
          Faults++;
          Frames[j] = Pages[i];
          Time[j] = Counter;
          Flag2 = 1;
          break;
        }
      }
    }

    if (Flag2 == 0)
    {
      Pos = findLRU(Time, numOfFrames);
      Counter++;
      Faults++;
      Frames[Pos] = Pages[i];
      Time[Pos] = Counter;
    }

    for (j = 0; j < numOfFrames; j++)
    {
      printf("%d\t", Frames[j]);
    }
    printf("\n");
  }

  printf("\nNumber of Page Faults is : %d\n\n", Faults);
  return 0;
}
