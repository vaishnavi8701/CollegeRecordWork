# include <stdio.h>
void main()
{
  int i, j, k, Arr[10], Group[10]={0}, Cnt;
  printf("\n");
   for(i=0;i<10;i++)
    {
     do
      {
       printf("Enter The Marks Of Student %d...", i+1);
       scanf("%d", &Arr[i]);
        if(Arr[i]<0 || Arr[i]>100)
         printf("Marks Should Be In The Range Of 0-100 Only.\n");
      }while(Arr[i]<0 || Arr[i]>100);
    if(Arr[i]%10==0)
     Arr[i]--;
     Arr[i]/=10;
     Group[Arr[i]]++;
   }
  for(i=0, j=0, k=10; i<10; i++, j+=10, k+=10)
   {
     printf("\nNumber Of Students In %d-%d Range...%d", j, k, Group[i]);
      if(i==0)
       j++;
   }
 printf("\n");
  for(i=0, j=0, k=10; i<10; i++, j+=10, k+=10)
   {
    printf("\n%d-%d...", j, k);
     if(i==0)
     {
      printf(".");
      j++;
     }
    printf(" ");
     for(Cnt=0;Cnt<Group[i];Cnt++)
      printf("*");
    }
 printf("\n");
}
