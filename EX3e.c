# include <stdio.h>
void main()
{
 int Flag;
 printf("\nEnter The Value Of Flag...");
 scanf("%d", &Flag);
  switch(Flag)
   {
     case 1:printf("HOT\n");
             break;
     case 2:printf("LUKEWARM\n");
             break;
     case 3:printf("COLD\n");
             break;
     default:printf("OUT OF RANGE\n");  
   }
}
