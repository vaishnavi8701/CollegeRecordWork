/*# include <stdio.h>
void Swap(int x, int y);
void main()
{
  int a, b;
  printf("\nEnter Two Numbers...");
  scanf("%d %d", &a, &b);
  printf("\nBefore Swapping: a=%d, b=%d", a, b);
  Swap(a,b);
  printf("\nAfter Swapping In The Main Function: a=%d, b=%d\n", a, b);
}
void Swap(int x, int y)
{
  int Temp;
  Temp=x;
  x=y;
  y=Temp;
  printf("\nAfter Swapping In The Swap Function: a=%d, b=%d", x, y);
}
*/
# include <stdio.h>
void Swap(int *x, int *y);
void main()
{
  int a, b;
  printf("\nEnter Two Numbers...");
  scanf("%d %d", &a, &b);
  printf("\nBefore Swapping: a=%d, b=%d", a, b);
  Swap(&a,&b);
  printf("\nAfter Swapping In The Main Function: a=%d, b=%d\n", a, b);
}
void Swap(int *x, int *y)
{
  int Temp;
  Temp=*x;
  *x=*y;
  *y=Temp;
  printf("\nAfter Swapping In The Swap Function: a=%d, b=%d", *x, *y);
}
