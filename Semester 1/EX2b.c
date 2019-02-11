# include <stdio.h>
# include <math.h>
void main()
{
    int i=5, j=25, k=125;
    printf("\nThe Value Of i Is...%3d\nThe Value Of j Is...%3d\nThe Value Of k Is...%3d\n", i, j, k);
    printf("\nThe Value Of i+j Is...%5d\nThe Value Of i-k Is...%5d\n", i+j, i-k);
    printf("\nThe Value Of sqrt(i+j) Is...%9.2f\nThe Value Of abs(i-k) Is...%7d\n", sqrt(i+j), abs(i-k));
}
