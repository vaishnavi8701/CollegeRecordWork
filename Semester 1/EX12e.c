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
 static int x = 10;
 auto int y = 20;
 printf("\nx: %d\ty: %d",x,y);
 x++;
 y++;
}
