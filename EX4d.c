# include <stdio.h>
void main()
{
  int Arr[10], Group1, Group2, Group3, Group4, Group5, Group6, Group7, Group8, Group9, Group10;
  Group1=Group2=Group3=Group4=Group5=Group6=Group7=Group8=Group9=Group10=0;
  printf("\n");
   for(int i=0;i<10;i++)
    {
     do
      {
       printf("Enter The Marks Of Student %d...", i+1);
       scanf("%d", &Arr[i]);
        if(Arr[i]<0 || Arr[i]>100)
         printf("Marks Should Be In The Range Of 0-100 Only.");
      }while(Arr[i]<0 || Arr[i]>100);
    }
   for(int i=0;i<10;i++)
   {
     if(Arr[i]>=0 && Arr[i]<=10)
      Group1++;
     else if(Arr[i]>=11 && Arr[i]<=20)
      Group2++;
     else if(Arr[i]>=21 && Arr[i]<=30)
      Group3++;
     else if(Arr[i]>=31 && Arr[i]<=40)
      Group4++;
     else if(Arr[i]>=41 && Arr[i]<=50)
      Group5++;
     else if(Arr[i]>=51 && Arr[i]<=60)
      Group6++;
     else if(Arr[i]>=61 && Arr[i]<=70)
      Group7++;
     else if(Arr[i]>=71 && Arr[i]<=80)
      Group8++;
     else if(Arr[i]>=81 && Arr[i]<=90)
      Group9++;
     else if(Arr[i]>=91 && Arr[i]<=100)
      Group10++;
   }
   printf("\nNumber Of Students In 0-10 Range...%d", Group1);
   printf("\nNumber Of Students In 11-20 Range...%d", Group2);
   printf("\nNumber Of Students In 21-30 Range...%d", Group3);
   printf("\nNumber Of Students In 31-40 Range...%d", Group4);
   printf("\nNumber Of Students In 41-50 Range...%d", Group5);
   printf("\nNumber Of Students In 51-60 Range...%d", Group6);
   printf("\nNumber Of Students In 61-70 Range...%d", Group7);
   printf("\nNumber Of Students In 71-80 Range...%d", Group8);
   printf("\nNumber Of Students In 81-90 Range...%d", Group9);
   printf("\nNumber Of Students In 91-100 Range...%d\n", Group10);
}
