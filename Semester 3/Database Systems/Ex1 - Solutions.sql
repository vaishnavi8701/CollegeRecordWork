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
insert into CLIENT_MASTER values('C00001','Karthik','Bombay',15000)
insert into CLIENT_MASTER values('C00003','Pramada','Bomabay',50000)
insert into CLIENT_MASTER values('C00004','Basu','Bomabay',0)
insert into CLIENT_MASTER values('C00005','Ravi','Delhi',20000)
insert into CLIENT_MASTER values('C00006','Ruk','Bombay',0)

--8. Table Name : STUDENT
create table STUDENT(SNO int, SNAME varchar(10), AGE int)

insert into STUDENT values(01,'Theodore',16)
insert into STUDENT values(23,'Joy',18)
insert into STUDENT values(34,'Abner',20)

--Queries
alter table STUDENT add RANK int
