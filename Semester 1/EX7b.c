# include <stdio.h>
int computeFunction(int a, int b);
void main()
{
 int x, y, Res;
 printf("\nEnter The Values Of x and y...");
 scanf("%d %d", &x, &y);
 Res=computeFunction(x, y);
 printf("The Result Of f(%d, %d) Is...%d\n",x, y, Res);
}
int computeFunction(int a, int b)
{
 int f;
  if(a<b)
   return 0;
 f=computeFunction(a-b, b)+1;
   return f;
}
