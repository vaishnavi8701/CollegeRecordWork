# include <stdio.h>
# define Max(a, b) a>b?a:b
void main()
{
  int Num1, Num2;
  printf("\nEnter Two Numbers...");
  scanf("%d %d", &Num1, &Num2);
  printf("The Greater Of The Two Numbers Is...%d\n", Max(Num1, Num2));
}
