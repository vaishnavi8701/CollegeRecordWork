# include <stdio.h>
void main()
{
  int a=2, b=3;
  int *p, *q;
  p=&a;
  q=&b;
  printf("\nAddress Of a...%p", p);
  printf("\nAddress Of b...%p", q);
  printf("\nValue At p...%d", *p);
  printf("\nValue At q...%d\n", *q);
}
