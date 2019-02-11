# include <stdio.h>
# include <math.h>
int main()
{
 int Ch;
  while(Ch!=0)
   {
    int i, Num, Num1, x, Arm_Sum=0, Digits=0, Prime_Flag=1;
    printf("\nEnter Any One Of The Following Choices:-");
    printf("\n1. Check For Prime Number");
    printf("\n2. Check For Armstrong Number");
    printf("\n0. Terminate The Program");
    printf("\nYour Choice Is...");
    scanf("%d", &Ch);
     switch(Ch)
      {
       case 1:Prime_Flag=1;
              printf("\nEnter A Positve Number Greater Than 2...");
              scanf("%d", &Num);
               for(i=2;i<=Num/2;i++)
                {
                 if(Num%i==0)
                  {
                   Prime_Flag=0;
                    break;
                  }
                }
	       if(Prime_Flag==1 && Num!=1)
                printf("The Entered Number Is A Prime Number.\n");
               else
                printf("The Entered Number Is Not A Prime Number.\n");
               break;
       case 2:printf("\nEnter A Number...");
              scanf("%d", &Num);
              Num1=Num;
              x=Num;
               while(x!=0)
                {
                 Digits++;
                 x/=10;
                }
              while(Num1!=0)
               {
                int Rem=Num1%10;
                Arm_Sum+=pow(Rem,Digits);
                Num1/=10;
               }
               if(Arm_Sum==Num)
                printf("The Entered Number Is An Armstrong Number.\n");
               else
                printf("The Entered Number Is Not An Armstrong Number.\n");
               break;
       case 0:printf("\nThank You For Using The Program.\n");
               break;
       default:printf("\nInvalid Choice.\n");
      }
   }
 return 0;
}
