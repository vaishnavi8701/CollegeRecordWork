# include <stdio.h>
void main()
{
 int n, i, j;
 printf("\nEnter The Number Of Students Who Have Taken The Exam...");
 scanf("%d", &n);
 int Arr[n][6], Sum[n];
  for(i=0;i<n;i++)
   Sum[i]=0;
 printf("\n");
  for(i=0;i<n;i++)
   {
     printf("Enter The Marks Of Student %d...", i+1);
     for(j=0;j<6;j++)
       {
        scanf("%d", &Arr[i][j]);
        Sum[i]+=Arr[i][j];
       }
   }
 printf("\nStudent Number   Exam 1   Exam 2   Exam 3   Exam 4   Exam 5   Exam 6   Average\n");
  for(i=0;i<n;i++)
   {
     printf("%8d    ", i+1);
      for(j=0;j<6;j++)
       {
        printf("%9d", Arr[i][j]);
       }
    printf("%9d", Sum[i]/6);
    printf("\n");
   }
}
