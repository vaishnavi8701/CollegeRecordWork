--1. Table Name : EMPLOYEE
create table EMPLOYEE(SSN int primary key, FNAME varchar(10) not null, MINT varchar(1) not null,
                      LNAME varchar(10) not null, BDATE datetime not null, ADDRESS varchar(10) not null,
		                  SEX varchar(1) not null, SALARY int not null, SUPERSSN int, DNO int not null)

insert into EMPLOYEE values(123456789,'John','B','Smith','09-jan-65','Houston','M',30000,333445555,5)
insert into EMPLOYEE values(333445555,'Franklin','T','Wong','08-dec-55','Houston','M',40000,888665555,5)
insert into EMPLOYEE values(999887777,'Alicia','J','Zelaya','19-jul-68','Spring','F',25000,987654321,4)
insert into EMPLOYEE values(987654321,'Jenifer','S','Wallace','20-jun-41','Bellaire','F',43000,888665555,4)
insert into EMPLOYEE values(666884444,'Ramesh','K','Narayan','15-sep-62','Humble','M',38000,333445555,5)
insert into EMPLOYEE values(453453453,'Joyce','A','English','31-jul-72','Houston','F',25000,333445555,5)
insert into EMPLOYEE values(987987987,'Ahmad','V','Jebbar','29-mar-69','Houston','M',25000,987654321,4)
insert into EMPLOYEE values(888665555,'James','E','Borg','10-nov-37','Houston','M',55000,NULL,1)

--2. Table Name : DEPARTMENT
create table DEPARTMENT(DINT int primary key, DNAME varchar(20) not null, MGRSSN int not null, MGRSTARTDATE datetime not null)

insert into DEPARTMENT values(5,'Research',333445555,'22-may-88')
insert into DEPARTMENT values(4, 'Administration',987654321,'01-jan-95')
insert into DEPARTMENT values(1,'Headquarters',888665555,'19-june-81')

--3. Table Name : DEPT_LOCATIONS
create table DEPT_LOCATIONS(DINT int, DLOCATION varchar(10), primary key(DINT, DLOCATION))

insert into DEPT_LOCATIONS values(1, 'Houston')
insert into DEPT_LOCATIONS values(4,'Stafford')
insert into DEPT_LOCATIONS values(5, 'Bellaire')
insert into DEPT_LOCATIONS values(5, 'Sugarland')
insert into DEPT_LOCATIONS values(5, 'Houston')

--4. Table Name : PROJECT
create table PROJECT(PINT int primary key, PNAME varchar(20) not null, PLOCATION varchar(10) not null, DNUM int REFERENCES DEPARTMENT(DINT))

insert into PROJECT values(1,'ProductX','Bellaire',5)
insert into PROJECT values(2,'ProductY','Sugarland',5)
insert into PROJECT values(3,'ProductZ','Houston',5)
insert into PROJECT values(10,'Computerization','Stafford',4)
insert into PROJECT values(20,'Reorganization','Houston',1)
insert into PROJECT values(30,'NewBenefits','Stafford',4)

--5. Table Name : WORKS_ON
create table WORKS_ON(ESSN int, PNO int, HOURS numeric(3,1), primary key(ESSN,PNO))

insert into WORKS_ON values(123456789,1,32.5)
insert into WORKS_ON values(123456789,2,7.5)
insert into WORKS_ON values(333884444,3,40.0)
insert into WORKS_ON values(453453453,1,20.0)
insert into WORKS_ON values(453453453,2,20.0)
insert into WORKS_ON values(333445555,2,10.0)
insert into WORKS_ON values(333445555,3,10.0)
insert into WORKS_ON values(333445555,10,10.0)
insert into WORKS_ON values(333445555,20,10.0)
insert into WORKS_ON values(999887777,30,30.0)
insert into WORKS_ON values(999887777,10,10.0)
insert into WORKS_ON values(987987987,10,35.0)
insert into WORKS_ON values(987987987,30,5.0)
insert into WORKS_ON values(987654321,30,20.0)
insert into WORKS_ON values(987654321,20,15.0)
insert into WORKS_ON values(888665555,20,NULL)

--6. Table Name : DEPENDENT
create table DEPENDENT(ESSN int, DEPENDENT_NAME varchar(10), SEX varchar(10) not null, BDATE datetime, RELATIONSHIP varchar(10) not null,
		                   primary key(ESSN, DEPENDENT_NAME))

insert into DEPENDENT values(333445555,'Alice','F','1966-04-05','DAUGHTER')
insert into DEPENDENT values(333445555,'Theodore','M','1983-10-25','SON')
insert into DEPENDENT values(333445555,'Joy','F','1958-05-03','SPOUSE')
insert into DEPENDENT values(987654321,'Abner','M','1942-02-28','SPOUSE')
insert into DEPENDENT values(123456789,'Micheal','M','1988-01-04','SON')
insert into DEPENDENT values(123456789,'Alice','F','1988-12-30','DAUGHTER')
insert into DEPENDENT values(123456789,'Elizabeth','F','1967-05-05','SPOUSE')

--7. Table Name : CLIENT_MASTER
create table CLIENT_MASTER(CLIENT_NO varchar(6) primary key check(CLIENT_NO like 'C%'), NAME varchar(10) not null, CITY varchar(10), BAL_DUE numeric(10,2))

insert into CLIENT_MASTER values('C00001','Karthik','Bombay',15000)
insert into CLIENT_MASTER values('C00002','Vandana','Madras',0)
insert into CLIENT_MASTER values('C00003','Pramada','Bombay',50000)
insert into CLIENT_MASTER values('C00004','Basu','Bombay',0)
insert into CLIENT_MASTER values('C00005','Ravi','Delhi',20000)
insert into CLIENT_MASTER values('C00006','Ruk','Bombay',0)

--8. Table Name : STUDENT
create table STUDENT(SNO int, SNAME varchar(10), AGE int)

insert into STUDENT values(01,'Theodore',16)
insert into STUDENT values(23,'Joy',18)
insert into STUDENT values(34,'Abner',20)

--Queries
1
alter table STUDENT add RANK int

2
alter table STUDENT alter column AGE int not null

3
alter table CLIENT_MASTER add check(BAL_DUE >= 0)

4
alter table STUDENT alter column SNO int not null
alter table STUDENT add primary key(SNO)

5
alter table STUDENT add unique(SNAME)

6
alter table STUDENT drop column RANK

7
alter table STUDENT alter column SNAME varchar(20)

8
alter table STUDENT drop constraint PK__STUDENT__47E208FD
alter table STUDENT alter column SNO varchar(20)
update STUDENT set SNO='S01' where SNO='1'
update STUDENT set SNO='S23' where SNO='23'
update STUDENT set SNO='S34' where SNO='34'
alter table STUDENT add check(SNO like 'S%')

9
insert into STUDENT values('S69','Nilesh',19)
insert into STUDENT values('S90','Srivatsan',23)
insert into STUDENT values('S89','Riyenth',18)
insert into STUDENT values('S56','Karthik',25)
insert into STUDENT values('S70','Chakith',20)

10
select * into STUDENT1 from STUDENT
select * from STUDENT1

11
select * into STUDENT2 from STUDENT
select * from STUDENT2

12
sp_help STUDENT
sp_help STUDENT1
sp_help STUDENT2

13
update STUDENT set AGE=28 where AGE=16
alter table STUDENT add check(AGE >= 18)

14
sp_help STUDENT

15
alter table STUDENT drop constraint CK__student__AGE__4D65D829

16
drop table STUDENT1

17
delete from  CLIENT_MASTER where NAME = 'Karthik'

18
update STUDENT set AGE = 21 where SNAME = 'Joy'
