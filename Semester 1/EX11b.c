# include <stdio.h>
void main()
{
 enum COLORS {RED, GREEN, BLUE};
 int Ch;
 printf("\nEnter A Choice...");
 scanf("%d", &Ch);
  switch(Ch)
   {
    case 0:printf("RED\n");
            break;
    case 1:printf("GREEN\n");
            break;
    case 2:printf("BLUE\n");
            break;
    default:printf("Invalid Choice.\n");
   }
}
