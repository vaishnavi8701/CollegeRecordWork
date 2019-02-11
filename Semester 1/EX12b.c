# include <stdio.h>
# define Pi 3.142
void main()
{
  int r;
  float Area;
  printf("\nEnter The Radius Of The Circle...");
  scanf("%d", &r);
  Area=Pi*r*r;
  printf("The Area Of The Circle Is...%.3f\n", Area);
}
