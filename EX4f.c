# include <stdio.h>
void main()
{
 int m, n;
 printf("\nEnter The Number Of Rows And Columns In The Table...");
 scanf("%d %d", &m, &n);
 printf("\nEnter The Elements Of The Matrix:-\n");
 int i, j, Table[m][n], List[n], Arr[m];
  for(i=0;i<m;i++)
   {
     for(j=0;j<n;j++)
      scanf("%d", &Table[i][j]);
   }
 printf("Enter The Elements Of List (Size n)...");
  for(i=0;i<n;i++)
   {
    scanf("%d", &List[i]);
    Arr[i]=0;
   }
  for(i=0;i<m;i++)
   {
     for(j=0;j<n;j++)
     {
       Arr[i]+=(Table[i][j]*List[j]);
     }
   }
 printf("\nArray After Carrying Out The Operation Is...");
  for(i=0;i<m;i++)
   printf("%d ", Arr[i]);
 printf("\n");
}
