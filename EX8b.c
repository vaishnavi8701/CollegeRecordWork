# include <stdio.h>
struct Ticket
{
char name[20], date[20], source[20], dist[20], tname[20];
int age,seatno,clas,id;
float cost;
char status;
};
int search(struct Ticket Obj[], int n, int id);
void status(struct ticket Obj[], int n);
int main()
{
 struct ticket Var[10];
 char Ch='y';
 int i=0, Choice, id;
 printf("----Welcome To Southern Railways----");
  while(Choice!=4)
   {
    printf("\nEnter Any One Of The Following Choices:-");
    printf("\n1. Book A Ticket");
    printf("\n2. Search Your Ticket");
    printf("\n3. View Ticket Status");
    printf("\n4. Terminate The Program");
    printf("\nYour Choice Is...");
    scanf("%d", &Choice);
     switch(Choice)
      {
       case 1:do
               {
                printf("\nEnter the name,date,source,distination,train name,age,seatno,class,id,cost,status:");
                scanf("%s%s%s%s%s%d%d%d%d%f %c",t[i].name,t[i].date,t[i].source,t[i].dist,t[i].tname, &t[i].age,&t[i].seatno,&t[i].clas,&t[i].id,&t[i].cost,&t[i].status);
                i++;
                printf("\nDo you want to book another ticket?(y/n)"); scanf(" %c",&ch);
}             while(ch == 'y' && i<=100);
}break;
case 2:
{
printf("\n----Search Passenger	");
printf("\nEnter the passenger id to search:"); scanf("%d",&id);
if(search(t,i,id))
printf("\nFound");
else
printf("\nNot found...");
case 3:
printf("\n	");
}break;
{
printf("\n----Status Check	");
status(t,i);
printf("\n	");
}break;
case 4:
{
}break;
default:printf("\nInvalid option...!");
}
}while(mch != 4);
}
int search(struct ticket t[],int n,int id)
{
int i; for(i=0;i<n;i++)
{
if(t[i].id == id)
{
printf("\n	");
printf("\nName: %s\nDate: %s\nSource: %s\nDestination: %s\nTrain name: %s\nAge: %d\nSeat.no: %d\nClass: %d\nId: %d\nCost: %f\nStatus: %c",t[i].name,t[i].date,t[ i].source,t[i].dist,t[i].tname,t[i].age,t[i].seatno,t[i].clas,t[i].id,t[i].cost,t[i].status);
printf("\n	");
return 1;
}
}
return 0;
}
void status(struct ticket t[], int n)
{
int i;
printf("\nName\t\tStatus");
for(i=0;i<n;i++)
printf("\n%s\t\t%c",t[i].name,t[i].status);
}
