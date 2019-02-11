# include <stdio.h>
void main()
{
 int Num, Flag=0, i, Arr[10]={1, 2, 3, 4, 5, 6, 7, 8};
 printf("\nEnter The Element To Be Searched For...");
 scanf("%d", &Num);
  for(i=0;i<8;i++)
   {
     if(Arr[i]==Num)
      {
       Flag=1;
       printf("The Element %d Exists In The Array At Position %d.\n", Arr[i], i+1);
      }
   }
  if(Flag==0)
   printf("The Element %d Does Not Exist In The Array.\n", Num);
}
