# include <stdio.h>
double Factorial(int n);
void main()
{
 int Num;
 double f;
 printf("\nEnter A Number...");
 scanf("%d", &Num);
 f=Factorial(Num);
 printf("The Factorial Of %d Is...%.0lf\n", Num, f);
}
double Factorial(int n)
{
 if(n==1)
  return 1;
 else
  return n*Factorial(n-1);
}
