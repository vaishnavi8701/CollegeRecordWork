# include <stdio.h>

struct Student
{
    int rNo;
    char Name[10];
    int m1, m2, m3, total;
    float avg;
    int res;
};

int main(void)
{
    struct Student s[3];
    printf("\nEnter details for 3 students :-\n");
    for(int i = 0 ; i < 3 ; i++)
    {
        printf("\nStudent %d:-", i + 1);
        printf("\nEnter roll number : ");
        scanf("%d", &s[i].rNo);
        printf("Enter student name : ");
        scanf("%s", s[i].Name);
        printf("Enter marks out of 100 in 3 subjects : ");
        scanf("%d %d %d", &s[i].m1, &s[i].m2, &s[i].m3);
        if(s[i].m1 >= 45 && s[i].m2 >= 45 && s[i].m3 >=45)
          s[i].res = 1;
        else
          s[i].res = 0;
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].avg = s[i].total / 3;
    }
    for(int i = 0 ; i < 3 ; i++)
    {
        printf("\nStudent %d:-", i + 1);
        printf("\nRoll number : %d", s[i].rNo);
        printf("\nStudent Name : %s", s[i].Name);
        printf("\nMarks in 3 subjects : %d %d %d", s[i].m1, s[i].m2, s[i].m3);
        printf("\nTotal marks : %d   Average Marks : %.2f", s[i].total, s[i].avg);
        s[i].res ? printf("\nResult : Pass\n") : printf("\nResult : Fail\n");
    }
    return 0;
}
