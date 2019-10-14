# include <stdio.h>

void bubbleSort(int Arr[], int Size)
{
    int i, j, k;
    for(i = 0 ; i < Size - 1 ; i++)
    {
        for(j = 0 ; j < Size - i - 1 ; j++)
        {
            if(Arr[j] > Arr[j + 1])
            {
                int Temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = Temp;
            }
        }
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
    bubbleSort(Arr, n);
    printf("\nSorted Array : ");
    for(i = 0 ; i < n ; i++)
      printf("%d ", Arr[i]);
    printf("\n");
    return 0;
}
