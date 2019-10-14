# include <stdio.h>

void selectionSort(int Arr[], int n)
{
  int i, j, iMin;

  for(i = 0 ; i < n - 1 ; i++)
  {
    iMin = i;
    for(j = i + 1 ; j < n ; j++)
    {
      if(Arr[j] < Arr[iMin])
      {
        iMin = j;
      }
    }
      int Temp = Arr[i];
      Arr[i] = Arr[iMin];
      Arr[iMin] = Temp;
  }
}

int main(void)
{
    int Arr[100], n, i;
    printf("\nEnter the size of the array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array : ");
    for(i = 0 ; i < n ; i++)
     scanf("%d", &Arr[i]);

    printf("\nInitial Array : ");
    for(i = 0 ; i < n ; i++)
      printf("%d ", Arr[i]);
    selectionSort(Arr, n);
    printf("\nSorted Array : ");
    for(i = 0 ; i < n ; i++)
      printf("%d ", Arr[i]);
    printf("\n");
    return 0;
}
