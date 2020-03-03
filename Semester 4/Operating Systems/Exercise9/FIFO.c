#include <stdio.h>
int main(void)
{
  int Avail, Count = 0, i, j, numOfPages, numOfFrames, k, Page[10], Frame[10];

  printf("\nEnter the Number of Pages : ");
  scanf("%d", &numOfPages);

  printf("Enter the Reference String : ");
  for (i = 0; i < numOfPages; i++)
    scanf("%d", &Page[i]);

  printf("Enter the Number of Frames in Memory : ");
  scanf("%d", &numOfFrames);

  for (i = 0; i < numOfFrames; i++)
    Frame[i] = -1;

  j = 0;
  printf("\nPages\t Page Allocated to Frame\n\n");

  for (i = 0; i < numOfPages; i++)
  {
    printf("%d\t ", Page[i]);
    Avail = 0;
    for (k = 0; k < numOfFrames; k++)
    {
      if (Frame[k] == Page[i])
      {
        Avail = 1;
        for (k = 0; k < numOfFrames; k++)
          printf("%d\t", Frame[k]);
      }
    }
    if (Avail == 0)
    {
      Frame[j] = Page[i];
      j = (j + 1) % numOfFrames;
      Count++;
      for (k = 0; k < numOfFrames; k++)
        printf("%d\t", Frame[k]);
    }
    printf("\n");
  }

  printf("\nNumber of Page Faults is : %d\n\n", Count);
  return 0;
}
