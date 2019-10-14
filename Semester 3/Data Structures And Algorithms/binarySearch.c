# include <stdio.h>

void binarySearch(int Arr[], int n, int x)
{
    int Low = 0, High = n - 1, Mid, Flag = 0;
      while(Low <= High)
        {
          Mid = (Low + High) / 2;
            if(x == Arr[Mid])
              {
                  printf("\n%d found at position %d\n", x, Mid + 1);
                  Flag = 1;
                   break;
              }
            else if(x < Arr[Mid])
              {
                  High = Mid - 1;
              }
            else if(x > Arr[Mid])
              {
                  Low = Mid + 1;
              }
        }
    if(Flag == 0)
    {
      printf("\n%d is not present in the array.\n", x);
    }
}

int main()
{
    int Arr[100], n, i, Num;
    printf("\nEnter the size of the array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array (In Sorted Order) : ");
    for(i = 0 ; i < n ; i++)
     scanf("%d", &Arr[i]);
    printf("Enter element for search : ");
    scanf("%d", &Num);
    binarySearch(Arr, n, Num);
    return 0;
}
