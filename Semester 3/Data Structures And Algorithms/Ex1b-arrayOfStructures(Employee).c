# include <stdio.h>

struct Employee
{
    int ECode;
    char EName[10];
    float basicPay, totSalary;
    int DA, HRA, CCA;
};
/*
DA is referred to as dearness allowance.
HRA is referred to as House Rent allowance.
CCA is refffered to as City Compensatory allowance.
*/
int main(void)
{
    struct Employee empObj[3];
    for(int i = 0 ; i < 3 ; i++)
    {
        printf("\nEmployee %d:-", i + 1);
        printf("\nEnter employee code : ");
        scanf("%d", &empObj[i].ECode);
        printf("Enter employee name : ");
        scanf("%s", empObj[i].EName);
        printf("Enter basic pay : ");
        scanf("%f", &empObj[i].basicPay);
        printf("Enter percentages for DA, HRA and CCA respectively: ");
        scanf("%d %d %d", &empObj[i].DA, &empObj[i].HRA, &empObj[i].CCA);
        empObj[i].totSalary = empObj[i].basicPay + (empObj[i].basicPay * (empObj[i].DA + empObj[i].HRA + empObj[i].CCA)) / 100;
    }
    for(int i = 0 ; i < 3 ; i++)
    {
        printf("\nEmployee %d:-", i + 1);
        printf("\nEmployee code : %d", empObj[i].ECode);
        printf("\nEmployee name : %s", empObj[i].EName);
        printf("\nTotal Take-Home Salary : %.2f\n", empObj[i].totSalary);
    }
    return 0;
}
