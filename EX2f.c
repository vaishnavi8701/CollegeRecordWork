# include <stdio.h>
void main()
{
  int a, b, c;
  printf("\nEnter Three Integers...");
  scanf("%d %d %d", &a, &b, &c);
  int Greatest=(a>b) ? (a>c?a:c) : (b>c?b:c);
  printf("The Greatest Among The Three Integers Is...%d\n", Greatest);
}
