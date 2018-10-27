# include <stdio.h>
void main()
{
 int m, n;
 printf("\nEnter The Number Of Rows And Columns In The Table...");
 scanf("%d %d", &m, &n);
 printf("\nEnter The Elements Of The Matrix:-\n");
 int i, j, Table[m][n];
  for(i=0;i<m;i++)
   {
     for(j=0;j<n;j++)
      scanf("%d", &Table[m][n]);
   }
 int List[n], Arr[n];
 printf("\nEnter The Elements Of List...");
  for(i=0;i<n;i++)
   {
    scanf("%d", &List[i]);
    Arr[i]=0;
   }
  for(i=0;i<m;i++)
   {
     for(j=0;j<n;j++)
      {
        printf("%d",Table[i][j]);
      }
   }
  for(i=0;i<n;i++)
   printf("%d ", Arr[i]);
}
