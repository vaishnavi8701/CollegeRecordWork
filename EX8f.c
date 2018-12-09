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
void Menu();
void readDetails();
void main()
{
  Menu();
}
void readDetails()
{
  struct Employee *ptr;
  int n, i;
  printf("\nEnter The Number Of Employees...");
  scanf("%d", &n);
  ptr=(struct Employee*)malloc(n*sizeof(struct Employee));
   for(i=0;i<n;i++)
    {
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
    }
}
void Menu()
{
  int Choice;
   while(Choice!=6)
    {
     printf("\nEnter Any One Of The Following Choices:-");
     printf("\n1. Enter Employee Details");
     printf("\n2. Display The Employee Information Getting The Maximum And Minimum Salary");
     printf("\n3. Display Employee Records In Ascending Order Of Salary");
     printf("\n4. Display Employee Records In Ascending Order Of Date Of Joining");
     printf("\n5. Display Department Wise Employee Records");
     printf("\n6. Terminate The Program");
     printf("\nYour Choice Is...");
     scanf("%d", &Choice);
      switch(Choice)
       {
         case 1:
         readDetails(n);
       }
}
