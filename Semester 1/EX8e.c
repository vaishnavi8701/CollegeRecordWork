# include <stdio.h>
struct Employee
{
  char empName[20], Designation[10];
  float basicPay, Allowances, Deductions, grossPay, netPay;
};
void main()
{
  struct Employee Var[5];
  int i;
   for(i=0;i<5;i++)
    {
     printf("\nEmployee %d:-", i+1);
     printf("\nEnter The Employee's Name...");
     scanf("%s", Var[i].empName);
     printf("Enter The Employee's Designation...");
     scanf("%s", Var[i].Designation);
     printf("Enter The Employee's Basic Pay...");
     scanf("%f", &Var[i].basicPay);
     printf("Enter The Employee's Allowances...");
     scanf("%f", &Var[i].Allowances);
     printf("Enter The Employee's Deductions...");
     scanf("%f", &Var[i].Deductions);
   }
  for(i=0;i<5;i++)
   {
     Var[i].grossPay=Var[i].basicPay+Var[i].Allowances;
     Var[i].netPay=Var[i].grossPay-Var[i].Deductions;
   }
 printf("\nEmployee Payroll:-\n");
  for(i=0;i<5;i++)
   {
     printf("\nEmplyee %d:-", i+1);
     printf("\nEmployee Name :%s", Var[i].empName);
     printf("\nEmployee Designation :%s", Var[i].Designation);
     printf("\nEmployee's Gross Salary :%.2f", Var[i].grossPay);
     printf("\nEmployee's Net Pay :%.2f\n", Var[i].netPay);
   }
}
