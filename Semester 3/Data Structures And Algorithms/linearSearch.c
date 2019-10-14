# include <stdio.h>

void linearSearch(int Arr[], int n, int Num)
{
  int i, Flag = 0;
  for(i = 0 ; i < n ; i++)
  {
      if(Arr[i] == Num)
      {
          printf("\n%d is found at position %d.\n", Num, i + 1);
          Flag = 1;
           break;
      }
  }
  if(Flag == 0)
    printf("\n%d is not present in the array.\n", Num);
}

int main(void)
{
    int Arr[100], n, i, Num;
    printf("\nEnter the size of the array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array : ");
    for(i = 0 ; i < n ; i++)
     scanf("%d", &Arr[i]);
    printf("Enter element for search : ");
    scanf("%d", &Num);
    linearSearch(Arr, n, Num);
    return 0;
}
