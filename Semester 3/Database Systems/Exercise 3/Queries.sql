1
select E.FNAME, E.LNAME, D.DNAME, P.PNAME from DEPARTMENT D, EMPLOYEE E, PROJECT P, WORKS_ON W where E.DNO = D.DINT and E.SSN = W.ESSN and P.PINT = W.PNO
order by D.DNAME desc

2
select DNO, COUNT(*), AVG(SALARY) from EMPLOYEE group by DNO

3
select PINT, PNAME, COUNT(*) from PROJECT, WORKS_ON where PINT = PNO group by PINT, PNAME

4
select PINT, PNAME, COUNT(*) from PROJECT, WORKS_ON, EMPLOYEE where PINT = PNO and SSN = ESSN and DNO = 5 group by PINT, PNAME

5
select SUM(SALARY), MAX(SALARY), MIN(SALARY), AVG(SALARY) from EMPLOYEE

6
select SUM(SALARY), MAX(SALARY), MIN(SALARY), AVG(SALARY) from(EMPLOYEE JOIN DEPARTMENT on DNO=DINT) where DNAME='Research'

7
select count(distinct SALARY) from EMPLOYEE

8
select count(*) from EMPLOYEE

9
select DNAME, count(*) from EMPLOYEE, DEPARTMENT where DNO = DINT group by DNAME

10
(select PINT from PROJECT, DEPARTMENT, EMPLOYEE where DNUM = DINT and MGRSSN = SSN and LNAME = 'Smith') UNION (select PINT from PROJECT, WORKS_ON, EMPLOYEE
where PINT = PNO and ESSN = SSN and LNAME = 'Smith')

12
select FNAME, LNAME from EMPLOYEE where SALARY>ALL (select SALARY from EMPLOYEE where DNO=5)

13
select count(*) from EMPLOYEE, DEPARTMENT where DNO = DINT and DNAME = 'Research'

14
select PINT, PNAME, count(*) from PROJECT, WORKS_ON where PINT = PNO group by PINT, PNAME having count(*) > 2

15
select FNAME, LNAME from EMPLOYEE where(select count(*) from DEPENDENT where SSN = ESSN) >= 2

16
select FNAME, LNAME from EMPLOYEE where DNO in(select DNO from EMPLOYEE where DNO = 4 group by DNO having count(DNO) > 2)

18
select FNAME, LNAME from EMPLOYEE where NOT EXISTS(select * from DEPENDENT where SSN = ESSN)

19
select DNO, FNAME, LNAME, SALARY from EMPLOYEE where SALARY in(select max(SALARY) from EMPLOYEE group by DNO)

20
select FNAME, LNAME, SALARY from EMPLOYEE E1  where SALARY > (select AVG(SALARY) from EMPLOYEE E2 where E2.DNO = E1.DNO)

21
select FNAME, LNAME from EMPLOYEE where NOT EXISTS(select * from DEPARTMENT where SSN = MGRSSN)
