# include <stdio.h>
void main()
{
 int Flag=0, i, Arr[10]={1, 2, 3, 4, 5, 6, 7, 8};
  for(i=0;i<7;i++)
   {
     if(Arr[i]==3)
      {
       Flag=1;
       printf("The Element %d Exists In The Array.\n", Arr[i]);
      }
   }
  if(Flag==0)
   printf("The Element 3 Does Not Exist In The Array.\n");
}

