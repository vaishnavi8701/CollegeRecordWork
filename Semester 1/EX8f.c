# include <stdio.h>
struct Date
{
  int Day, Month, Year;
};
struct Employee
{
  int empCode, deptNo;
  char empName[20];
  float empSalary;
  struct Date DOJ;
};
void main()
{
 struct Employee Var;
 printf("\nEnter Employee Code...");
 scanf("%d", &Var.empCode);
 printf("Enter Employee Name...");
 scanf("%s", Var.empName);
 printf("Enter Employee Salary...");
 scanf("%f", &Var.empSalary);
 printf("Enter Employee Department Number...");
 scanf("%d", &Var.deptNo);
 printf("Enter Day, Month And Year Of Joining...");
 scanf("%d %d %d", &Var.DOJ.Day, &Var.DOJ.Month, &Var.DOJ.Year);
 printf("\nEmployee Details:-\n");
 printf("\nEmployee Code :%d", Var.empCode);
 printf("\nEmployee Name :%s", Var.empName);
 printf("\nEmployee Salary :%.2f", Var.empSalary);
 printf("\nEmployee Department Number :%d", Var.deptNo);
 printf("\nDate Of Joining :%d/%d/%d\n", Var.DOJ.Day, Var.DOJ.Month, Var.DOJ.Year);
}
