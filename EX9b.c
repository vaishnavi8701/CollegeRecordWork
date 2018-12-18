# include <stdio.h>
struct Example
{
  int x;
  float y;
};
void main()
{
  struct Example Var;
  struct Example *Ptr;
  Ptr=&Var;
  Ptr->x=5;
  Ptr->y=3.142;
  printf("\nValue Stored In x and y Is %d and %.3f respectively.\n", Ptr->x, Ptr->y);
}
