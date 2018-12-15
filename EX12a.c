# include <stdio.h>
# define Pi 3.142
int main()
{
  int r;
  float Area;
  printf("\nEnter The Radius Of The Circle...");
  scanf("%d", &r);
  Area=Pi*r*r;
  printf("The Area Of The Circle Is...%f\n", Area);
  return 0;
}
