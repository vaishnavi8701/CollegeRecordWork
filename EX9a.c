# include <stdio.h>
void main()
{
 int a, *p;
 p=&a;
 *p=10;
 printf("\nAddress Of a...%p", p);
 printf("\nValue At p...%d\n", *p);
}
