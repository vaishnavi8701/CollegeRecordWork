# include <stdio.h>
union Area
{
 int Side;
 float Radius, Area;
};
void main()
{
 union Area Var;
 printf("\nEnter The Side Of The Square...");
 scanf("%d", &Var.Side);
 Var.Area=Var.Side*Var.Side;
 printf("The Area Of The Square Is...%.0f\n", Var.Area);
 printf("\nEnter The Radius Of The Circle...");
 scanf("%f", &Var.Radius);
 Var.Area=3.142*Var.Radius*Var.Radius;
 printf("The Are Of The Circle Is...%.2f\n", Var.Area);
}
