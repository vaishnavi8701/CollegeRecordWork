# include <stdio.h>
extern int x;
void print()
{
 int square;
 printf("\nx: %d",x);
 square = x*x;
 printf("\nx: %d\n",square);
}
