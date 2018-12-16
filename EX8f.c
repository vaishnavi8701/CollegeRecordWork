# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
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
void readDetails(struct Employee *, int);
void dispDetails(struct Employee *, int);
int minSalary(struct Employee*, int);
int maxSalary(struct Employee*, int);
void sortSalary(struct Employee* [], int);
void Menu();
void main()
{
  Menu();
}
void readDetails(struct Employee *Ptr, int Size)
{
  int i;
   for(i=0;i<Size;i++)
    {
      /*printf("\nEnter Employee Code...");
      scanf("%d", &(Ptr+i)->empCode);
      printf("Enter Employee Name...");
      scanf("%s", &(Ptr+i)->empName);*/
      printf("Enter Employee Salary...");
      scanf("%f", &(Ptr+i)->empSalary);
      /*printf("Enter Employee Department Number...");
      scanf("%d", &(Ptr+i)->deptNo);
      printf("Enter Day, Month And Year Of Joining...");
      scanf("%d %d %d", &(Ptr+i)->DOJ.Day, &(Ptr+i)->DOJ.Month, &(Ptr+i)->DOJ.Year);*/
    }
}
void dispDetails(struct Employee *Ptr, int Pos)
{
 /*printf("Employee Code...%d", (Ptr+Pos)->empCode);
 printf("\nEmployee Name...%s", (Ptr+Pos)->empName);*/
 printf("\nEmployee Salary...%.2f", (Ptr+Pos)->empSalary);
 /*printf("\nEmployee Department Number...%d", (Ptr+Pos)->deptNo);
 printf("\nEmployee Date Of Joining...%d/%d/%d\n", (Ptr+Pos)->DOJ.Day, (Ptr+Pos)->DOJ.Month, (Ptr+Pos)->DOJ.Year);*/
}
int minSalary(struct Employee *Ptr, int Size)
{
 int i, Pos=0;
  for(i=1;i<Size;i++)
   {
    if(Ptr->empSalary>(Ptr+i)->empSalary)
     Pos=i;
   }
 printf("\nEmployee With Lowest Salary:-\n");
 return Pos;
}
int maxSalary(struct Employee *Ptr, int Size)
{
 int i, Pos=0;
  for(i=1;i<Size;i++)
   {
    if(Ptr->empSalary<(Ptr+i)->empSalary)
     Pos=i;
   }
 printf("\nEmployee With Highest Salary:-\n");
 return Pos;
}
void sortSalary(struct Employee *Ptr[], int Size)
{
  int i, j;
  struct Employee *Temp=NULL;
  for(i=0;i<Size-1;i++)
   {
    for(j=0;j<Size-i-1;j++)
     {
      if(Ptr[j]->empSalary>Ptr[j+1]->empSalary)
       {
        Temp=Ptr[j];
        Ptr[j]=Ptr[j+1];
        Ptr[j+1]=Temp;
       }
     }
   }
}
void Menu()
{
  int i, Choice, n, minPos, maxPos;
  struct Employee *Var;
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
        case 1:printf("\nEnter The Number Of Employees...");
               scanf("%d", &n);
               Var=(struct Employee*)malloc(n*sizeof(struct Employee));
                if(Var==NULL)
                 {
                  printf("\nMemory Not Allotted.");
                  getch();
                  exit(0);
                 }
               readDetails(Var, n);
                break;
        case 2:minPos=minSalary(Var, n);
               dispDetails(Var, minPos);
               maxPos=maxSalary(Var, n);
               dispDetails(Var, maxPos);
                break;
        case 3:sortSalary(Var, n);
                for(i=0;i<n;i++)
                 dispDetails(Var, n);
                break;/*
        case 4:dispDOJ();
                break;
        case 5:dispDept();
                break;*/
        case 6:printf("\nThank You For Using The Program.");
                break;
        default:printf("\nInvalid Choice.\n");
                 break;
       }
    }
}
