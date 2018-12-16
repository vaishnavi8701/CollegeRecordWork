# include <stdio.h>
struct Ticket
{
 char custName[20], boardTime[20];
 int seatNo, custAge;
 float ticketCost;
};
int readDetails(struct Ticket []);
void printTicket(struct Ticket [], int);
void main()
{
 struct Ticket Var[10];
 int ticketNo=readDetails(Var);
 printTicket(Var, ticketNo);
}
int readDetails(struct Ticket Obj[])
{
  printf("\n---------Boat Ticket Booking---------\n");
  int n=0;
  char Ch='y';
   do
    {
     printf("\nEnter The Customer Name...");
     scanf("%s", Obj[n].custName);
     printf("Enter The Customer Age...");
     scanf("%d", &Obj[n].custAge);
     printf("Enter The Boarding Time...");
     scanf("%s", Obj[n].boardTime);
     printf("Enter The Seat Number...");
     scanf("%d", &Obj[n].seatNo);
     printf("Enter The Ticket Cost...");
     scanf("%f", &Obj[n].ticketCost);
     n++;
     printf("\nWant To Book Another Ticket<y/n>...");
     scanf(" %c", &Ch);
   }while(Ch=='y' && n<=10);
 return n;
}
void printTicket(struct Ticket Obj[], int n)
{
 int i;
 printf("\nBooked Ticket Details:-\n");
 for(i=0;i<n;i++)
  {
   printf("\nCustomer Name :%s", Obj[i].custName);
   printf("\nCustomer Age :%d", Obj[i].custAge);
   printf("\nBoarding Time :%s", Obj[i].boardTime);
   printf("\nSeat Number :%d", Obj[i].seatNo);
   printf("\nTicket Cost :%.2f\n", Obj[i].ticketCost);
  }
}
