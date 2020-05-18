create table employee (SSN int primary key,FNAME varchar(10)not null,MINT varchar(1)not null,LNAME varchar(10)not null,BDATE datetime not null,ADDRESS varchar(10) not null,SEX varchar(1) not null,SALARY int not null,SUPERSSN int,DNO int not null)
sp_help employee
insert into employee values(123456789,'John','B','Smith','09-jan-65','Houstan','M',30000,333445555,5)
SELECT * FROM employee
insert into employee values(333445555,'Franklin','T','Wong','08-Dec-55','Houstan','M',40000,888665555,5)
select * from employee
insert into employee values(999887777,'Alicia','J','Zelaya','19-July-68','Spring','F',25000,987654321,4)
insert into employee values(987654321,'Jenifer','S','Wallace','20-June-41','Bellaire','f',43000,888665555,4)
insert into employee values(666884444,'Ramesh','K','Narayan','15-sep-62','Humble','M',38000,333445555,5)
insert into employee values(453453453,'Joyce','A','English','31-July-72','Houstan','F',25000,333445555,5)
insert into employee values(987987987,'Ahmad','V','Jebbar','29-march-69','Houstan','M',25000,987654321,4)
insert into employee values(888665555,'James','E','Borg','10-Nov-37','Houstan','M',55000,NULL,1)
SELECT * FROM employee

create table departmen(DINT int primary key,DNAME varchar(20)not null,MGRSSN varchar(10) not null,MGRSTARTDATE datetime not null)
sp_help departmen
insert into departmen values(5,'research',333445555,'22-may-88')
insert into departmen values(4,'administration',987654321,'01-jan-95')
insert into departmen values(1,'headquaters',888665555,'19-june-81')
select * from departmen

create table DEPT_LOCATIONS(DINT int ,DLOCATION varchar(10),primary key(DINT,DLOCATION))
sp_help DEPT_LOCATIONS
insert into DEPT_LOCATIONS values(1,'houstan')
insert into DEPT_LOCATIONS values(4,'stafford')
insert into DEPT_LOCATIONS values(5,'bellaire')
insert into DEPT_LOCATIONS values(5,'sugarland')
insert into DEPT_LOCATIONS values(5,'houstan')
select * from DEPT_LOCATIONS
 
create table works_on(ESSN int,pno int,hours numeric(3,1),primary key(ESSN,pno))
sp_help works_on
insert into works_on values(123456789,1,32.5)
insert into works_on values(123456789,2,7.5)
insert into works_on values(333884444,3,40.0)
insert into works_on values(453453453,1,20.0)
insert into works_on values(453453453,2,20.0)
insert into works_on values(333445555,2,10.0)
insert into works_on values(333445555,3,10.0)

insert into works_on values(333445555,10,10.0)
insert into works_on values(333445555,20,10.0)
insert into works_on values(999887777,30,30.0)
insert into works_on values(999887777,10,10.0)
insert into works_on values(987987987,10,35.0)
insert into works_on values(987987987,30,5.0)
insert into works_on values(987654321,30,20.0)
insert into works_on values(987654321,20,15.0)
insert into works_on values(888665555,20,NULL)
select * from works_on

create table dependent(ESSN int,dependent_name varchar(10),sex varchar(10)not null,bdate datetime,relationship varchar(10)not null,primary key(ESSN,dependent_name))
sp_help dependent
insert into dependent values(333445555,'Alice','F','1966-04-05','daughter')
insert into dependent values(333445555,'theodre','m','1983-10-25','son')
insert into dependent values(333445555,'joy','F','1958-05-03','spouse')
insert into dependent values(987654321,'Abner','M','1942-02-28','spouse')
insert into dependent values(123456789,'micheal','M','1988-01-04','son')
insert into dependent values(123456789,'Alice','F','1988-12-30','daughter')
insert into dependent values(123456789,'Elizabeth','F','1967-05-05','daughter')
select * from dependent

create table project1 (pint int primary key,pname varchar(20)not null,plocation varchar(10)not null,dnum int references departmen(DINT))
sp_help project
insert into project1 values(1,'productx','bellaire',5)
insert into project1 values(2,'producty','sugarland',5)
insert into project1 values(3,'productz','houstan',5)
insert into project1 values(10,'computerization','stafford',4)
insert into project1 values(20,'reorganization','houstan',1)
insert into project1 values(30,'newbenefits','stafford',4)
select * from project1

create table client_master(client_no varchar(6),check(client_no like 'c%'),name varchar(10)not null,city varchar(10),bal_due numeric(10,2)) 
sp_help project
insert into client_master values('C00001','KARTHICK','BOMBAY',15000)
insert into client_master values('C00002','VANDANA','MADRAS',0)
insert into client_master values('C00003','PRAMADA','BOMBAY',50000)
insert into client_master values('C00004','BASU','BOMBAY',0)
insert into cleint_master values('C00005','RAVI','DELHI',20000)
insert into client_master values('C00006','RUK','BOMBAY',0)
select * from client_master

CREATE table student(sno int,sname varchar(10),age int)
sp_help student
insert into student values(01,'theodre',16)
insert into student values(23,'joy',18)
insert into student values(34,'abner',20)
select * from student
1
alter table student add rank int;
select * from student
2
alter table student alter column age int not null;
select * from student
3
alter table client_master add check (bal_due>=0);
sp_help client_master
select * from client_master
4
alter table student alter column sno int not null;
alter table student add constraint sno primary key(sno);
sp_help student;
select * from student
5
alter table student add unique (sname);
select * from student
6
alter table student drop column rank
sp_help student
select * from student
7
alter table student alter column sname varchar(20)
select * from student
8
alter table student drop constraint sno  
alter table student alter column sno varchar(10)
update student set sno='s01' where sno=01
update student set sno='s23' where sname='joy'
update student set sno='s34' where sname='abner'
alter table student add constraint checkcons check (sno like's%')
sp_help student
select * from student
9
insert into student values('s12','vaishu',23)
insert into student values('s21','varshu',32)
insert into student values('s13','vivek',28)
insert into student values('s14','siva',29)
insert into student values('s16','madhan',24)
select * from student
10
select * into student1 from student
sp_help student1
select * from student1
11
select * into student2 from student
sp_help student2
select * from student2 
12
sp_help student1
sp_help student2
sp_help student

13
update student set age=21 where sno='s01'
alter table student add constraint agecons check (age>=18)
select* from student
18
update student set age=21 where sno=23
select * from student
17
delete from client_master where name='karthick'
sp_help client_master
select * from client_master
16
drop table student1
select* from student1
15
alter table student drop constraint agecons
sp_help student
select * from student
14
sp_help student


1.
select * from employee where address like '%tan%'
select * from employee
2.
select * from employee where bdate like '%50'
3.
select fname from employee where fname like 'a%'or fname like 'f%'or fname like 'j%' 
4.
select fname from employee where fname not like 'a%'or fname not like 'f%'or fname not like 'j%' 
5.
select fname,lname from employee where dno=5 and salary between 30000 and 40000
6.
select fname,salary+500 as new_salary from employee
7.
select (salary*12)+1000 as annual_sal from employee
8.
select ((salary+1000)*12) as annualsal from employee
9.
select fname,lname from employee where(SUPERSSN=NULL)
10.
select fname ,lname from employee where bdate like'%sep-62'
11.
select name from client_master where city='bombay' or city='madras' or city='delhi'
12.
select fname,lname from employee where salary not between 40000 and 50000
13.
select bdate,address from employee where fname='franklin'and mint='T'and lname='wong'
14.
select ssn,dname from employee,department
15.
select * from employee,department
16.
select distinct salary from employee
17.
select fname+lname as fullname from employee
18.
select fname from employee order by fname desc
19.
select salary+(0.10*salary) as newsal from employee where ssn in (select essn from works_on where pno in (select pint from project1 where pname='productY'))
20.
select FNAME,LNAME from employee where SSN in (select ESSN from works_on where pno in (select pint from project1 where dnum=5))
21.
select * from employee as e, departmen as d where e.ssn=d.mgrssn
22.
select fname,lname from employee where dno=(select dno from employee where fname='Ramesh' and mint='K' and lname='narayan') 
23.
select fname,lname from employee as e ,departmen as d where e.dno=d.dint and d.mgrssn='888665555'
24.
select essn from works_on where pno in(1,2,3)
25.
select fname,lname,address from employee where dno=(select dint from departmen where dname='administration')
26.
select lname,address,bdate,ssn,essn,pno,pint,plocation,dnum from employee as e, works_on as w,project1 as p where e.ssn=w.essn and w.pno= p.pint
27.
select e1.fname,e1.lname,e2.fname,e2.lname from employee as e1,employee as e2 where e1.ssn=e2.supers
28.
select pname from project1 where plocation in (select dlocation from DEPT_LOCATIONS)
29.
select pname from project1 where plocation not in (select dlocation from DEPT_LOCATIONS)




1.
select e.fname,e.lname,d.dname,p.pname from departmen d,employee e,project1 p,works_on w where e.dno=d.dint and e.ssn =w.essn and p.pint=w.pno order by d.dname desc
2.
select dno,count(*),avg(salary)from employee group by dno
3.
select pint,pname,count(*) from project1,works_on where pint=pno group by pint,pname
4.
select pint,pname,count(*) from project1,works_on,employee where pint=pno and ssn=essn and dno=5 group by pint,pname
5.
select sum(salary),max(salary),min(salary),avg(salary)from employee
6.
select sum(salary),max(salary),min(salary),avg(salary)from (employee join department on dno=dint)where dname='research'
7.
select count(distinct salary)from employee
8.
select count(*) from employee
9.
select dname,count(*) from employee,departmen where dno=dint group by dname
10.
(select pint from project1,departmen,employee where dnum=dint and mgrssn=ssn and lname='smith') union (select pint from project1,works_on,employee where pint=pno and essn=ssn and lname='smith')
11.

12.
select fname,lname from employee where salary>all(select salary from employee where dno=5)
13.
select count(*) from employee ,departmen where dno=dint and dname='research'
14.
select pint,pname,count(*) from project1,works_on where pint=pno group by pint,pname having count(*)>2
15.
select fname,lname from employee where(select count(*)from dependent where ssn=essn)>=2
16.
select fname,lname from employee where dno in (select dno from employee where dno=4 group by dno having count(dno)>2)
18.
select fname,lname from employee where not exists (select * from dependent where ssn=essn) 
19.
select dno,fname,lname,salary from employee where salary in(select max(salary)from employee group by dno)
20.
select fname,lname,salary from employee e1 where salary >(select avg(salary) from employee e2 where e2.dno=e1.dno)
21.
select fname,lname from employee where not exists(select * from departmen where ssn=mgrssn)
22.
select fname,lname from employee where salary<(select min(salary) from employee where dno=5)

1.
create table loan(loanno int,branchname varchar(10),amount int)   
sp_help loan 
insert into loan values(1000,'Chennai',20000)
insert into loan values(2000,'Mumbai',45000)
insert into loan values(3000,'Delhi',50000)
insert into loan values(4000,'Chennai',90000)
select * from loan


2.
create table account(accountno int,branchname varchar(10),balance int)
sp_help account
insert into account values(999,'Chennai',20000)
insert into account values(888,'Mumbai',45000)
insert into account values(777,'Delhi',50000)
insert into account values(666,'kolkata',90000)
select * from account
.
3.
create table depositor(custid varchar(10),customername varchar(10),accountno int)
sp_help depositor
insert into depositor values('C1','Ram',999)
insert into depositor values('C2','Raja',777)
insert into depositor values('C3','Dinesh',666)
insert into depositor values('C4','Ramesh',888)
select * from depositor


4.
create table borrower(custid varchar(10),customername varchar(10),loanno int)
sp_help borrower
insert into borrower values('C1','Ram',3000)
insert into borrower values('C2','Raja',4000)
insert into borrower values('C5','Vani',1000)
insert into borrower values('C6','Geetha',2000)
select * from borrower

Yash Yash
	
09:55 (11 minutes ago)
	
to me
1.
create table loan(loanno int,branchname varchar(10),amount int)   
sp_help loan 
insert into loan values(1000,'Chennai',20000)
insert into loan values(2000,'Mumbai',45000)
insert into loan values(3000,'Delhi',50000)
insert into loan values(4000,'Chennai',90000)
select * from loan


2.
create table account(accountno int,branchname varchar(10),balance int)
sp_help account
insert into account values(999,'Chennai',20000)
insert into account values(888,'Mumbai',45000)
insert into account values(777,'Delhi',50000)
insert into account values(666,'kolkata',90000)
select * from account


3.
create table depositor(custid varchar(10),customername varchar(10),accountno int)
drop table depositor 
sp_help depositor
insert into depositor values('C1','Ram',999)
insert into depositor values('C2','Raja',777)
insert into depositor values('C3','Dinesh',666)
insert into depositor values('C4','Ramesh',888)
select * from depositor


4.
create table borrower(custid varchar(10),customername varchar(10),loanno int)
sp_help borrower
insert into borrower values('C1','Ram',3000)
insert into borrower values('C2','Raja',4000)
insert into borrower values('C5','Vani',1000)
insert into borrower values('C6','Geetha',2000)
select * from borrower



1.
create view loaninfo as (select loanno,branchname from loan)
select * from loaninfo 
2.
sp_help loaninfo
3.
insert into loaninfo values(5000,'ranchi')
insert into loaninfo values(6000,'kashmir')
4.
select *from loaninfo
5.
select *from loan
6.
update loaninfo set loanno=1500 where branchname='ranchi'
select * from loaninfo
7
delete loaninfo where loanno=5000 and branchname='ranchi'
select * from loaninfo.
8.
create view loancustomers1 as select b.custid,l.branchname from borrower b,loan l where l.loanno=b.loanno
select * from loancustomers1
9.
sp_help loancustomers
10. 
insert into loanCustomers1 values('C7','Kerala')

11. 
select * from loanCustomers

12. 
select * from borrower
select * from loan

13. 
update loanCustomers set custId = 'C3' where branchName = 'Mumbai'

14.
 delete loanCustomers where branchName = 'Mumbai'

15.
 create view allCustomers as select b.custId, b.customerName, l.branchName, l.loanNo from borrower b,loan l where b.loanNo = l.loanNo

16. 
create view branchCustomers as select customerName, branchName from allCustomers
    select * from branchCustomers

17. 
create view custLoanAccount as select b.custId, b.customerName, d.accountNo from borrower b, depositor d where d.custId = b.custId	 
    select * from custLoanAccount
18.
select customerm
1.
alter table departmen add  total_sal int
update departmen set total_sal=(select sum(salary)from employee where dno=1)where dint=1
update departmen set total_sal=(select sum(salary)from employee where dno=4)where dint=4
update departmen set total_sal=(select sum(salary)from employee where dno=5)where dint=5
select total_sal from departmen
create trigger salins on employee for insert as
begin
update department set total_sal=total_sal+(select salary from inserted)where dint=(select dno from inserted)
end
insert into employee values (111223333,'madhu','A','nila','19-jul-74','houst','f',50000,879654321,4)
select dint,total_sal from departmen
select * from employee
select * from departmen
2.
create trigger deletersalins on employee for delete as
begin
update department set total_sal=total_sal-(select salary from deleted)where dint=(select dno from deleted)
end
delete employee where fname='madhu'
select dint,total_sal from department 
select * from employee
select * from departmen
3.
 create trigger midsalins on employee for update as
begin
update department set total_sal=total_sal-(select salary from inserted)where dint=(select dno from inserted)
end
insert into employee values (111223333,'madhu','A','nila','19-jul-74','houst','f',50000,879654321,4)
update employee set salary=30000 where ssn=111223333
select dint,total_sal from department 
select * from employee
select * from departmen
4.
create trigger display delete message on employee instead of delete as
begin
print'deletion is not possible'
end
delete employee where fname='nila'




1)
create procedure saraise @ssn int
as begin
declare @oldsal int,@newsal int
set @oldsal=(select salary from employee where ssn=@ssn)
set @newsal=@oldsal+(@oldsal*0.1)
update employee set salary=@newsal where ssn=@ssn
end
exec saraise 123456789

2)
create procedure findname @ssn int
as begin
declare @dno int
set @dno=(select dno from employee where ssn=@ssn)
select dname from departmen where dint=@dno
end 
exec findname 333445555

3)
create procedure findmp @dno int
as begin 
select count(dno) from employee where dno=@dno
end
exec findmp 5

1)
create function itb47.fn1(@dno int)
returns varchar(10)
as begin
declare @dnum int,@res varchar(5)
set @dnum=(select dint from departmen where dint=@dno)
if(@dnum=NULL)
   set @res='y'
else
   set @res='n'
return @res 
end
select itb47.fn1(5)as result

2.)
create function itb47.dpre(@ssn int)
returns int
as begin
declare @dnum int,@res varchar(10)
set @dnum=(select dno from employee where ssn=@ssn)
set @res=(select count(*) from employee where dno=@dnum)
return @res
end
select itb47.dpre(123456789) as countemp


3.)
create function itb47.f(@ssn int)
returns varchar(10)
as begin
declare @essn int,@res varchar(5)
set @essn=(select essn from dependent where essn=@ssn)
if(@essn=null)
   set @res='n'
else
   set @res='y'
return @res 
end
select itb47.f(987654321)as result

4.)
create function itb47.f1(@ssn int)
returns varchar(10)
as begin
declare @essn int,@res varchar(5)
set @essn=(select essn from dependent where essn=@ssn)
if(@essn=null)
   set @res='n'
else
   set @res='y'
return @res 
end
select itb47.f1(1)as result

5.)
create function itb47.fnn(@ssn int)
return varchar(10)
returns begin
declare @essn int,@res varchar(5)
set @essn=(select mgrssn from department where mgrssn=@ssn)
if(@essn=null)
   set @res='n'
else
   set @res='y'
return @res 
end
select itb47.fnn987654321)as result






1)
declare @n int,@i int,@fact int
begin
set @n=5
set @fact=1
set @i=1
while @i<=@n
begin
set @fact=@fact*@i
set @i=@i+1
end
print 'factorial is'
print @fact
end

2.)




4))
declare @n int,@i int,@temp int
begin
set @n=5
set @i=2
set @temp=@n
set @n=@i
set @i=@temp
print @n
print @i
end 





