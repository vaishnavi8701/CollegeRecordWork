# include <stdio.h>
void main()
{
 int Sum=0;
 printf("\n");
 int i=2;
  while(i<=100)
   {
    Sum+=i;
    i+=3;
   }
 printf("\nThe Sum Of The Series Is...%d\n", Sum);
}

# include <stdio.h>
void main()
{
 int Sum=0;
 printf("\n");
 int i=2;
  do
   {
    Sum+=i;
    i+=3;
   }while(i<=100);
 printf("\nThe Sum Of The Series Is...%d\n", Sum);
}

# include <stdio.h>
void main()
{
 int Sum=0, i;
 printf("\n");
  for(int i=2;i<=100;i+=3)
   Sum+=i;
 printf("\nThe Sum Of The Series Is...%d\n", Sum);
}
