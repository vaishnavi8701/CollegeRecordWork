# include <stdio.h>
void main()
{
 int Sum=0, i=2;
 printf("\n");
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
 int Sum=0, i=2;
 printf("\n");
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
  for(i=2;i<=100;i+=3)
   Sum+=i;
 printf("\nThe Sum Of The Series Is...%d\n", Sum);
}
