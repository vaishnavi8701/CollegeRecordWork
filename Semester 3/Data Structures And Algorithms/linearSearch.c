# include <stdio.h>

void linearSearch(int Arr[], int n, int Num)
{
  int i, Flag = 0;
  for(i = 0 ; i < n ; i++)
  {
      if(Arr[i] == Num)
      {
          printf("\n%d is found at position %d.", Num, i + 1);
          Flag = 1;
           break;
      }
  }
  if(Flag == 0)
    printf("\n%d is not present in the array.", Num);
}

int main(void)
{
    int Arr[] = {1, 3, 5, 2, 6, 8, 9, 4};
    int n = sizeof(Arr) / sizeof(Arr[0]);
    int Num1 = 6, Num2 = 7;
    linearSearch(Arr, n, Num1);
    linearSearch(Arr, n, Num2);
    return 0;
}

/*
6 is found at position 5.
7 is not present in the array.
*/
