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
    int Arr[] = {9, 7, 4, 3, 1};
    int n = sizeof(Arr) / sizeof(Arr[0]), i;
    printf("\nInitial Array : ");
    for(i = 0 ; i < n ; i++)
      printf("%d ", Arr[i]);
    bubbleSort(Arr, n);
    printf("\nSorted Array : ");
    for(i = 0 ; i < n ; i++)
      printf("%d ", Arr[i]);
    return 0;
}

/*
Initial Array : 9 7 4 3 1
Sorted Array : 1 3 4 7 9
*/
