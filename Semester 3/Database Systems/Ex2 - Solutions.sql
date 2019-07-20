1
select FNAME, LNAME from EMPLOYEE where ADDRESS like '%ton%'

2
select FNAME, LNAME from EMPLOYEE where BDATE like '%50'

3
select FNAME, LNAME from EMPLOYEE where FNAME like '[afj]%'

4
select FNAME, LNAME from EMPLOYEE where FNAME not like '[afj]%'

5
select FNAME, LNAME from EMPLOYEE where DNO = 5 and SALARY between 30000 and 40000

13
select BDATE, ADDRESS from EMPLOYEE where FNAME = 'Franklin'

16
select distinct SALARY from EMPLOYEE

17
select FNAME+ ' ' +LNAME as "Name" from EMPLOYEE
