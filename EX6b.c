# include <stdio.h>
double computePower(float Base, int Exponent);
void main()
{
 float x;
 int n;
 double y;
 printf("\nEnter The Base...");
 scanf("%f", &x);
 printf("Enter The Exponent...");
 scanf("%d", &n);
 y=computePower(x, n);
 printf("\nThe Result Of %.3f^%d Is...%.4lf\n", x, n, y);
}
double computePower(float Base, int Exponent)
{
 double Res=1;
 int i;
  for(i=1;i<=Exponent;i++)
   Res*=Base;
 return Res;
}
