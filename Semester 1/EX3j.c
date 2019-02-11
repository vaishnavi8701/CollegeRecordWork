# include <stdio.h>
void main()
{
  int Day, Month, Year;
  printf("\nEnter The Month, Day And Year...");
  scanf("%d %d %d", &Month, &Day, &Year);
  int Diff=(int)(30.42*(Month-1))+Day;
   if(Month==2)
    Diff++;
   if((Month>2) && (Month<8))
    Diff--;
   if((Year%4==0) && (Month>2))
     Diff++;
 Year-=1980;
 int Leap_Years=Year/4;
 Diff+=(Leap_Years*1461);
 int Rem_Years=Year%4;
 Diff+=(Rem_Years*365+1);
 Diff-=2;
  printf("%d", Diff);
}
