# include <stdio.h>
struct Ticket
{
 char custName[20], boardTime[20];
 int seatNo, custAge;
 float ticketCost;
};
void printTicket(struct Ticket [], int);
void main()
{
 struct Ticket Var[100];
 int ticketNo=0;
 char Ch='y';
 printf("---------Boat Ticket Booking---------");
  do
   {
    printf("\nEnter The Customer Name...");
    scanf("%s", Var[ticketNo].custName);
    printf("Enter The Customer Age...");
    scanf("%d", &Var[ticketNo].custAge);
    printf("Enter The Boarding Time...");
    scanf("%s", Var[ticketNo].boardTime);
    printf("Enter The Seat Number...");
    scanf("%d", &Var[ticketNo].seatNo);
    printf("Enter The Ticket Cost...");
    scanf("%f", &Var[ticketNo].ticketCost);
    ticketNo++;
    printf("\nWant To Book Another Ticket<y/n>...");
    scanf("%c", &Ch);
  }while(Ch=='y' && ticketNo<=100);
 printf("\nBooked ticket details");
 //printTicket(Var, ticketNo);
}/*
void printTicket(struct Ticket t[], int n)
{
 int i;
 for(i=0;i<n;i++)
  {
   printf("\n	");
   printf("\nName: %s\nAge: %d\nTime: %s\nSeat.No: %d\nCost: %f",t[i].name,t[i].age,t[i].tim e,t[i].seatno,t[i].cost);
printf("\n	");
}
}*/
