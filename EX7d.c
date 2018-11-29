# include <stdio.h>
int computeHCF(int x, int y);
void main()
{
   int Num1, Num2, HCF;
   printf("\nEnter Two Numbers...");
   scanf("%d %d", &Num1, &Num2);
   HCF=computeHCF(Num1, Num2);
   printf("The HCF Of %d And %d Is...%d\n", Num1, Num2, HCF);
}
int computeHCF(int x, int y)
{
  if(y==0)
   return x;
  else
   return computeHCF(y, x%y);
}
