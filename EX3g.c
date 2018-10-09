# include <stdio.h>
void main()
{
  int Sum=0, Count=0;
   for(int i=1;i<=200;i++)
    {
     if(i%2==0)
      {
        Sum+=i;
        Count++;
      }
    }
 printf("\nThe Count Of Even Numbers From 1 To 200 Is...%d", Count);
 printf("\nThe Sum Of The Series Is...%d\n", Sum);
}
