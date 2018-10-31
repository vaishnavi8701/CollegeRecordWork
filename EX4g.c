# include <stdio.h>
void main()
{
 int i, j, Count, m, n, k;
 printf("\nEnter The Number Of Rows And Columns In Matrix 1...");
 scanf("%d %d", &m, &n);
 printf("\nEnter The Number Of Columns In Matrix 2...");
 scanf("%d", &k);
 printf("\nEnter The Elements Of Matrix 1:-\n");
 float Arr1[m][n], Arr2[n][k], Product[m][k];
  for(i=0;i<m;i++)
   {
    for(j=0;j<n;j++)
     {
      scanf("%d", &Arr1[i][j]);
     }
   }
 printf("\nEnter The Elements Of Matrix 2:-\n");
  for(i=0;i<n;i++)
   {
    for(j=0;j<k;j++)
     {
      scanf("%d", &Arr2[i][j]);
     }
   }
 printf("\nResult Of Matrix Multiplication:-\n");
  for(i=0;i<m;i++)
   {
    for(j=0;j<k;j++)
     {
      Product[i][j]=0;
      for(Count=0;Count<n;Count++)
       {
        Product[i][j]+=Arr1[i][Count]*Arr2[Count][j];
      }
     }
   }
  for(i=0;i<m;i++)
    for(j=0;j<k;j++)
     printf("%d ", Product[i][j]);
}
