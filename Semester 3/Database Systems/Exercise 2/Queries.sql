1
select FNAME, LNAME from EMPLOYEE where ADDRESS like '%ton%'

2
select FNAME, LNAME from EMPLOYEE where BDATE like '%50%'

3
select FNAME, LNAME from EMPLOYEE where FNAME like '[afj]%'

4
select FNAME, LNAME from EMPLOYEE where FNAME not like '[afj]%'

5
select FNAME, LNAME from EMPLOYEE where DNO = 5 and SALARY between 30000 and 40000

6
select FNAME, LNAME, (SALARY + 500) as 'newSalary' from EMPLOYEE

7
select FNAME, LNAME, (SALARY*12 + 1000) as 'annualSal' from EMPLOYEE

8
select FNAME, LNAME, ((SALARY + 1000)*12) as 'totalSal' from EMPLOYEE

9
select FNAME, LNAME from EMPLOYEE where SUPERSSN is NULL

10
select FNAME, LNAME from EMPLOYEE where BDATE < '30-Sep-1962'

11
select NAME from CLIENT_MASTER where CITY in('Bombay','Delhi','Madras')

12
select FNAME, LNAME from EMPLOYEE where SALARY not between 40000 and 50000

13
select BDATE, ADDRESS from EMPLOYEE where FNAME = 'Franklin'

14
select E.SSN, D.DNAME from EMPLOYEE E, DEPARTMENT D

15
select * from EMPLOYEE, DEPARTMENT

16
select distinct SALARY from EMPLOYEE

17
select FNAME + ' ' + LNAME as 'FullName' from EMPLOYEE

18
select FNAME, LNAME from EMPLOYEE order by FNAME desc

19
select FNAME, LNAME, (SALARY + (SALARY/10)) as 'newSalary' from EMPLOYEE where DNO = (select DNUM from PROJECT where PNAME = 'ProductY')

20
select FNAME, LNAME from EMPLOYEE where DNO = 5

21
select E.FNAME, E.LNAME from EMPLOYEE E, DEPARTMENT D where E.SSN = D.MGRSSN

22
select FNAME, LNAME from EMPLOYEE where DNO = (select DNO from EMPLOYEE where FNAME = 'Ramesh')

23
select FNAME, LNAME from EMPLOYEE where DNO = (select DINT from DEPARTMENT where MGRSSN = 888665555)

24
select distinct ESSN from WORKS_ON where PNO in(1,2,3)

25
select FNAME, LNAME, ADDRESS from EMPLOYEE where DNO = (select DINT from DEPARTMENT where DNAME = 'Administration')

26
select P.PINT, P.DNUM, E.LNAME, E.ADDRESS, E.BDATE from PROJECT P, EMPLOYEE E, DEPARTMENT D where P.DNUM=E.DNO and D.MGRSSN = E.SSN and P.PLOCATION = 'Stafford';

27
select E.FNAME, E.LNAME, S.FNAME, S.LNAME from EMPLOYEE E, EMPLOYEE S where E.SUPERSSN = S.SSN

28
select PNAME from PROJECT where PLOCATION in(select DLOCATION from DEPT_LOCATIONS where DNUM = DINT)

29
select PNAME from PROJECT where PLOCATION not in(select DLOCATION from DEPT_LOCATIONS where DNUM = DINT)


