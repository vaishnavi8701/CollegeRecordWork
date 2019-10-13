# include <stdio.h>

void insertionSort(int Arr[], int Size)
{
  int i, j, Temp;
  for (i = 1 ; i < Size ; i++)
  {
    Temp = Arr[i];
    j = i - 1;
    while (j >= 0 && Arr[j] > Temp)
    {
        Arr[j + 1] = Arr[j];
        j--;
    }
    Arr[j + 1] = Temp;
  }
}

int main(void)
{
    int Arr[] = {9, 7, 4, 3, 1};
    int n = sizeof(Arr) / sizeof(Arr[0]), i;
    printf("\nInitial Array : ");
    for(i = 0 ; i < n ; i++)
      printf("%d ", Arr[i]);
    insertionSort(Arr, n);
    printf("\nSorted Array : ");
    for(i = 0 ; i < n ; i++)
      printf("%d ", Arr[i]);
    return 0;
}

/*
Initial Array : 9 7 4 3 1
Sorted Array : 1 3 4 7 9
*/
