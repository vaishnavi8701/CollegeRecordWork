# include <stdio.h>
void main()
{
    int Num1, Num2;
    printf("\nEnter Two Numbers...");
    scanf("%d %d", &Num1, &Num2);
    int Sum, Diff, Product, Quotient, Rem;
    Sum=Num1+Num2;
    Diff=Num1-Num2;
    Product=Num1*Num2;
    Quotient=Num1/Num2;
    Rem=Num1%Num2;
    printf("\nThe Sum Of The Two Numbers Is...%d", Sum);
    printf("\nThe Difference Of The Two Numbers Is...%d", Diff);
    printf("\nThe Product Of The Two Numbers Is...%d", Product);
    printf("\nDivision Result:-");
    printf("\nQuotient...%d", Quotient);
    printf("\nRemainder...%d\n", Rem);
}
