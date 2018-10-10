# include <stdio.h>
void main()
{
  int Size, Sum=0;
  printf("\nEnter The Size Of The Array...");
  scanf("%d", &Size);
  int Arr[Size];
  printf("\n");
   for(int i=0;i<Size;i++)
    {
     printf("Enter The Value Of Element %d:", i+1);
     scanf("%d", &Arr[i]);
     Sum+=Arr[i];
    }
 printf("\nThe Sum Of The Elements Of The Given Array Is...%d\n", Sum);
}
