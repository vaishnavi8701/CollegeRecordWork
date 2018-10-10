# include <stdio.h>
# include <math.h>
int main()
{
 int i, Num, Temp_Num, x, Arm_Sum=0, Digits=0;
 printf("\nEnter A Number...");
 scanf("%d", &Num);
 int Prime_Flag=1;
  for(i=2;i<=Num/2;i++)
    {
      if(Num%i==0)
      {
        Prime_Flag=0;
         break;
      }
    }
    Temp_Num=Num;
    x=Num;
     while(x!=0)
      {
        Digits++;
        x/=10;
      }
     while(Temp_Num!=0)
      {
        int Rem=Temp_Num%10;
        Arm_Sum+=pow(Rem,Digits);
        Temp_Num/=10;
      }
  if(Prime_Flag==1 && Num!=1)
   printf("\nThe Entered Number Is A Prime Number.\n");
 if(Arm_Sum==Num)
   printf("\nThe Entered Number Is An Armstrong Number.\n");
 return 0;
}
