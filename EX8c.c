# include <stdio.h>
union Sample
{
  int x;
  float y;
};
int main()
{
 union Sample Var;
 Var.x=2;
 printf("\nThe Value Of x Is...%d", Var.x);
 Var.y=2.745;
 printf("\nThe Value Of y Is...%.3f\n", Var.y);
 return 0;
}
