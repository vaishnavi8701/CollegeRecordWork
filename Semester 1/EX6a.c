# include <stdio.h>
double Factorial(int Num);
void main()
{
  int Num;
  double f;
   do
    {
     printf("\nEnter A Number...");
     scanf("%d", &Num);
      if(Num<0)
       printf("Sorry. Factorial Of Only A Positve Number Can Be Computed.\n");
    }while(Num<0);
  f=Factorial(Num);
  printf("The Factorial Of %d Is...%.0f\n", Num, f);
}
double Factorial(int Num)
{
  int i;
  double Fact;
  Fact=1;
   for(i=2;i<=Num;i++)
    Fact*=i;
  return Fact;
}
