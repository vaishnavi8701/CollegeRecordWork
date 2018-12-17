# include <stdio.h>
struct Ticket
{
 int ticketId;
 char custName[20], DOD[20], startPoint[20], destPoint[20], trainName[20];
 int custAge, seatNo;
 char custClass[5];
 float ticketCost;
 char Status;
};
int readTicket(struct Ticket []);
int searchTicket(struct Ticket [], int, int);
void viewStatus(struct Ticket [], int);
void main()
{
 struct Ticket Var[10];
 char Ch='y';
 int Choice, ticketNos, Id;
 printf("----Welcome To Southern Railways----");
  while(Choice!=4)
   {
    printf("\nEnter Any One Of The Following Choices:-");
    printf("\n1. Book A Ticket");
    printf("\n2. Search For Your Ticket");
    printf("\n3. View Ticket Status");
    printf("\n4. Terminate The Program");
    printf("\nYour Choice Is...");
    scanf("%d", &Choice);
     switch(Choice)
      {
       case 1:ticketNos=readTicket(Var);
              break;
       case 2:printf("\n----Search Passenger----");
              printf("\nEnter The Ticket Id To Be Searched For...");
              scanf("%d", &Id);
               if(searchTicket(Var, ticketNos, Id)==0)
                printf("No Such Ticket Found\n");
               break;
       case 3:viewStatus(Var, ticketNos);
               break;
       case 4:printf("\nThank You For Using The Program.\n");
               break;
       default:printf("\nInvalid Choice.\n");
      }
   }
}
int readTicket(struct Ticket Obj[])
{
 char Ch='y';
 int i=0;
  do
   {
    printf("\nEnter Ticket Id...");
    scanf("%d", &Obj[i].ticketId);
    printf("Enter The Passenger Name...");
    scanf("%s", Obj[i].custName);
    printf("Enter Passesnger Age...");
    scanf("%d", &Obj[i].custAge);
    printf("Enter The Departure Date...");
    scanf("%s", Obj[i].DOD);
    printf("Enter The Starting Point...");
    scanf("%s", Obj[i].startPoint);
    printf("Enter The Destination...");
    scanf("%s", Obj[i].destPoint);
    printf("Enter The Train Name...");
    scanf("%s", Obj[i].trainName);
    printf("Enter Passenger Class...");
    scanf("%s", Obj[i].custClass);
    printf("Enter The Seat Number...");
    scanf("%d", &Obj[i].seatNo);
    printf("Enter Ticket Cost...");
    scanf("%f", &Obj[i].ticketCost);
    printf("Enter Ticket Status<y/n>...");
    scanf(" %c", &Obj[i].Status);
    i++;
    printf("\nDo You Want To Book Another Ticket<y/n>...");
    scanf(" %c", &Ch);
   }while(Ch=='y' && i<=100);
 return i;
}
int searchTicket(struct Ticket Obj[], int n, int searchId)
{
 int i;
  for(i=0;i<n;i++)
   {
    if(Obj[i].ticketId==searchId)
     {
      printf("\nPasseneger Name :%s", Obj[i].custName);
      printf("\nPassenger Age :%d", Obj[i].custAge);
      printf("\nDeparture Date :%s", Obj[i].DOD);
      printf("\nStarting Point :%s", Obj[i].startPoint);
      printf("\nDestination :%s", Obj[i].destPoint);
      printf("\nTrain Name :%s", Obj[i].trainName);
      printf("\nPassenger Class :%s", Obj[i].custClass);
      printf("\nSeat Number :%d", Obj[i].seatNo);
      printf("\nTicket Cost :%.2f\n", Obj[i].ticketCost);
      return 1;
     }
   }
 return 0;
}
void viewStatus(struct Ticket Obj[], int n)
{
 int i;
 printf("\n----Status Check----");
 printf("\nName\t\tStatus");
  for(i=0;i<n;i++)
   printf("\n%s\t\t%c", Obj[i].custName, Obj[i].Status);
 printf("\n");
}
