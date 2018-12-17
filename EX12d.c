# include <stdio.h>
void printValues();
int main()
{
 printValues();
 printValues();
 printValues();
 printf("\n");
 return 0;
}
void printValues()
{
 auto int x = 10;
 register int y = 20;
 printf("\nx: %d\ty: %d",x,y);
 x++;
 y++;
}
