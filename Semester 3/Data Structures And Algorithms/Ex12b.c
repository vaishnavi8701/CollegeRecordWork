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
    int Arr[100], n, i;
    printf("\nEnter the size of the array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array : ");
    for(i = 0 ; i < n ; i++)
     scanf("%d", &Arr[i]);

    printf("\nInitial Array : ");
    for(i = 0 ; i < n ; i++)
      printf("%d ", Arr[i]);
    insertionSort(Arr, n);
    printf("\nSorted Array : ");
    for(i = 0 ; i < n ; i++)
      printf("%d ", Arr[i]);
    printf("\n");
    return 0;
}
