# include <stdio.h>

void selectionSort(int Arr[], int n)
{
  int i, j, iMin;
  for(i = 0 ; i < n - 1 ; i++)
  {
    iMin = i;
    for(int j = i + 1 ; j < n ; j++)
    {
      if(Arr[j] < Arr[iMin])
      {
        iMin = j;
      }
      int Temp = Arr[i];
      Arr[i] = Arr[iMin];
      Arr[iMin] = Temp;
    }
  }
}

int main(void)
{
    int Arr[] = {9, 7, 4, 3, 1};
    int n = sizeof(Arr) / sizeof(Arr[0]), i;
    printf("\nInitial Array : ");
    for(i = 0 ; i < n ; i++)
      printf("%d ", Arr[i]);
    selectionSort(Arr, n);
    printf("\nSorted Array : ");
    for(i = 0 ; i < n ; i++)
      printf("%d ", Arr[i]);
    return 0;
}

/*
Initial Array : 9 7 4 3 1
Sorted Array : 1 3 4 7 9
*/
