# include <stdio.h>
void main()
{
  int Num;
  printf("\nEnter An Integer....");
  scanf("%d", &Num);
   if(Num>0)
    printf("The Entered Number Is Positve.\n");
   else if(Num<0)
    printf("The Entered Number Is Negative.\n");
   else
    printf("The Entered Number Is Zero.\n");  
}
