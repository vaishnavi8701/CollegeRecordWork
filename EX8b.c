# include <stdio.h>
struct Ticket
{
  int pnrNo, trainNo, seatNo, noOfPassengers;
  char custName[10], trainName[20], DOJ[15], coachNo[3], arrTime[6], deptTime[6];
};
void main()
{
 struct Ticket t;
 printf("\nEnter Ticket Details As Folows:-\n");
 printf("Enter PNR Number...");
 scanf("%d", &t.pnrNo);
 printf("Enter Customer Name...");
 scanf("%s", t.custName);
 printf("Enter Train Number...");
 scanf("%d", &t.trainNo);
 printf("Enter Train Name...");
 getchar();
 gets(t.trainName);
 printf("Enter Date Of Journey...");
 scanf("%s", t.DOJ);
 printf("Enter Coach Number...");
 scanf("%s", t.coachNo);
 printf("Enter Seat Number...");
 scanf("%d", &t.seatNo);
 printf("Enter Number Of Passengers...");
 scanf("%d", &t.noOfPassengers);
 printf("Enter Departure Time...");
 scanf("%s", t.deptTime);
 printf("Enter Arrival Time...");
 scanf("%s", t.arrTime);
 printf("\nTicket:-\n");
 printf("\nPNR Number :%d", t.pnrNo);
 printf("\nCustomer Name :%s", t.custName);
 printf("\n__________________________________________________________________");
 printf("\nTrain Number     Train Name       Date Of Journey   Coach    Seat");
 printf("\n__________________________________________________________________");
 printf("\n%d \t\t %s   %s \t    %s %8d", t.trainNo, t.trainName, t.DOJ, t.coachNo, t.seatNo);
 printf("\n__________________________________________________________________");
 printf("\nNumber Of Passengers     Arrival Time    Departure Time");
 printf("\n__________________________________________________________________");
 printf("\n%d \t\t\t  %s \t %s\n", t.noOfPassengers, t.deptTime, t.arrTime);
}
