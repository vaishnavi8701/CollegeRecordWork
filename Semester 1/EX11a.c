# include <stdio.h>
enum days {Sun, Mon, Tue, Wed, Thu, Fri, Sat};
void main()
{
  enum days Var;
   for(Var=Sun;Var<=Sat;Var++)
    {
      switch(Var)
       {
         case Sun:printf("\nSunday");
                   break;
         case Mon:printf("\nMonday");
                   break;
         case Tue:printf("\nTuesday");
                   break;
         case Wed:printf("\nWednesday");
                   break;
         case Thu:printf("\nThursday");
                   break;
         case Fri:printf("\nFriday");
                   break;
         case Sat:printf("\nSaturday\n");
                   break;
       }
    }
}
