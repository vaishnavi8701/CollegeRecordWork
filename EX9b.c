# include <stdio.h>
struct Distance
{
 int kmCount, mCount;
};
void main()
{
 struct Distance d1, d2, d5={0,0};
 struct Distance *d3, *d4;
 d3=&d1;
 d4=&d2;
 printf("\nEnter Distance 1 In Kilometres And Metres...");
 scanf("%d %d", &d3->kmCount, &d3->mCount);
 printf("Enter Distance 2 In Kilomteres And Metres...");
 scanf("%d %d",&d4->kmCount,&d4->mCount);
 d5.kmCount=d3->kmCount+d4->kmCount;
 d5.mCount=d3->mCount+d4->mCount;
  if(d5.mCount>=1000)
   {
    d5.mCount-=1000;
    d5.kmCount++;;
   }
 printf("\nThe Sum Of The Two Distances Is %d Kilometres And %d Metres\n", d5.kmCount, d5.mCount);
}
