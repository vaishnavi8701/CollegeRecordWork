# include <stdio.h>
int main()
{
 printf("\n");
  for(int i=1;i<=4;i++)
   {
    for(int j=i;j<4;j++)
     printf(" ");
    for(int j=1;j<=(2*i-1);j++)
     {
      if(j==1 || j==(2*i-1))
       printf("*");
      else
       printf(" ");
     }
    printf("\n");
   }
   for(int i=1;i<=4;i++)
   printf("* ");
}
