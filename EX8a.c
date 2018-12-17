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
 struct Ticket Var[5] ={
                       {"Neel", "12:30", 12, 18, 1200},
                       {"Deepak", "11:30", 11, 45, 1250},
                       {"Anish", "11:45", 10, 21, 1300},
                       {"Kushal", "12:00", 15, 25, 1500},
                       {"Krish", "01:00", 19, 27, 2000}
                       };
 printTicket(Var, 5);
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
