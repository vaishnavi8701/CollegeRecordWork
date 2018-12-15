# include <stdio.h>
# define Cube(x) x*x*x
void main()
{
 int Num, Res;
 printf("\nEnter A Number...");
 scanf("%d", &Num);
 Res=Cube(Num);
 printf("The Cube Of %d Is...%d\n", Num, Res);  
}
