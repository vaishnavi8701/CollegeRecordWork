# include <stdio.h>
void main()
{
  int i, j, Size;
  printf("\nEnter The Number Of Rows And Columns In The Square Matrix...");
  scanf("%d", &Size);
  int Arr[Size][Size];
  printf("\nEnter The Elements Of The Matrix:-\n");
   for(i=0;i<Size;i++)
      for(j=0;j<Size;j++)
        scanf("%d", &Arr[i][j]);
   for(i=0;i<Size;i++)
      for(j=0;j<Size;j++)
          if(i==j)
           Arr[i][j]=0;
  printf("The Matrix With All Elements Changed To 0 Is:-\n");
   for(i=0;i<Size;i++)
    {
      for(j=0;j<Size;j++)
        printf("%d ", Arr[i][j]);
     printf("\n");
    }
}
