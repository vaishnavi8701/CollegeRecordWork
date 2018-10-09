# include <stdio.h>
int main()
{
 char Ch;
 printf("\nEnter A Character...");
 scanf("%c", &Ch);
 switch(Ch)
  {
    case 'R':
    case 'r':printf("RED\n");
              break;
    case 'G':
    case 'g':printf("GREEN\n");
              break;
    case 'B':
    case 'b':printf("BLUE\n");
              break;
    default:printf("BLACK\n");
  }
}
