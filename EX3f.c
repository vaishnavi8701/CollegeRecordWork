# include <stdio.h>
int main()
{
 char Color;
 printf("\nEnter A Character...");
 scanf("%c", &Color);
 switch(Color)
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
