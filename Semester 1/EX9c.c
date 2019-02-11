# include <stdio.h>
void main()
{
  int Arr[5], i;
  printf("\n");
   for(i=0;i<5;i++)
    {
      printf("Enter Element %d:", i+1);
      scanf("%d", Arr+i);
    }
  printf("\nThe Elements Of The Array Are: ");
   for(i=0;i<5;i++)
    printf("%d ", *(Arr+i));
}
