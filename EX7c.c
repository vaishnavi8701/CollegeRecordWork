# include <stdio.h>
int computeFunction(int n);
void main()
{
  int Num, Res;
  printf("\nEnter The Value Of n...");
  scanf("%d", &Num);
  Res=computeFunction(Num);
  printf("The Result Of f(%d) Is...%d\n", Num, Res);
}
int computeFunction(int n)
{
  if(n==1)
   return 0;
  else if(n>1)
   return computeFunction(n/2)+1;
}
