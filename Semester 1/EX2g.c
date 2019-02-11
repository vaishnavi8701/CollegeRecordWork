# include <stdio.h>
void main()
{
    int i, j;
    printf("\nEnter Two Integers i and j...");
    scanf("%d %d", &i, &j);
    int Round_Off=i+j-i%j;
    printf("The Rounded Off Integer Is...%d\n", Round_Off);
}
