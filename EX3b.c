# include <stdio.h>
int main()
{
 int Days, Start_Day;
 printf("\nEnter The Number Of Days In The Month...");
 scanf("%d", &Days);
 printf("Enter The Starting Day Of The Month (Sun=1 Sat=7)....");
 scanf("%d", &Start_Day);
 printf("\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
 int k;
 for(k=0;k<Start_Day-1;k++)
 printf("     ");
  for(int i=1;i<=Days;i++)
   {
    printf("%5d", i);
     if(++k>6)
      {
       k=0;
       printf("\n");
      }
   }
 printf("\n");
return 0;
}
