# include <stdio.h>

void binarySearch(int Arr[], int n, int x)
{
    int Low = 0, High = n - 1, Mid, Flag = 0;
      while(Low <= High)
        {
          Mid = (Low + High) / 2;
            if(x == Arr[Mid])
              {
                  printf("\n%d found at position %d", x, Mid + 1);
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
      printf("\n%d is not present in the array.", x);
    }
}

void main()
{
    int Array[] = {19, 22, 24, 47, 47, 53, 61};
    int Size = sizeof(Array) / sizeof(Array[0]), Search;
    int firstSearch = 53, secondSearch = 92;
    binarySearch(Array, Size, firstSearch);
    binarySearch(Array, Size, secondSearch);
}
