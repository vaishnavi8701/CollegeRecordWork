# include <stdio.h>
# include <math.h>
double Fact(int Num);
void main()
{
  int i, x, n;
  double Result=0;
  printf("\nEnter The Value Of x...");
  scanf("%d", &x);
  printf("Enter The Number Of Terms...");
  scanf("%d", &n);
   for(i=1;i<=n;i++)
    Result+=(pow(x, i)/Fact(i));
  printf("\nThe Sum Of The Series Is...%.3lf\n", Result);
}
double Fact(int Num)
{
  int i;
  double Factorial=1;
   for(i=2;i<=Num;i++)
    Factorial*=i;
  return Factorial;
}
