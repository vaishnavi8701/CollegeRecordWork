# include <stdio.h>
# include <math.h>
int main()
{
    int i=5, j=25, k=125;
    printf("\n%3d\n %3d\n %3d\n", i, j, k);
    printf("%5d\n %5d\n", i+j, i-k);
    printf("%9.2f\n %7d\n", sqrt(i+j), abs(i-k));
    return 0;
}
