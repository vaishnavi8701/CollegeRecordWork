# include <stdio.h>
# define Square(x) x*x
void main()
{
 int Num, Res;
 printf("\nEnter A Number...");
 scanf("%d", &Num);
 Res=Square(Num);
 printf("The Square Of The Number Is...%d\n", Res);
}
