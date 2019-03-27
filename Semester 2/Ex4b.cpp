# include <iostream>
# include <string>

using namespace std;

class University
{
  public:
    string Dept;
    void readData()
    {
        cout << "Enter Department Name : ";
        cin >> Dept;
    }
    void displayData()
    {
        cout << "\nName Of Department Is : " << Dept;
    }
};

class Student : public virtual University
{

  protected:

      string Name, Dob, Gender;

  public:

    void readData()
    {
        cout << "Enter Student Name : ";
        cin >> Name;
        cout << "Enter Student Gender : ";
        cin >> Gender;
        cout << "Enter Student DOB : ";
        cin >> Dob;
    }

    void displayData()
    {
        cout << "\nStudent Name : " << Name
             << "\nStudent Gender : " << Gender
             << "\nStudent DOB : " << Dob
             << "\n";
    }

};

class Faculty : public virtual University
{
  public:
    string Name, Dob, Gender;

    void readData()
    {
        cout << "Enter Faculty Name : ";
        cin >> Name;
        cout << "Enter Faculty Gender : ";
        cin >> Gender;
        cout << "Enter Faculty DOB : ";
        cin >> Dob;
    }

    void displayData()
    {
        cout << "\nFaculty Name : " << Name
             << "\nFaculty Gender : " << Gender
             << "\nFaculty DOB : " << Dob
             << "\n";
    }

};

class Subject : public Student, public Faculty
{
  public:
    string Sub1, Sub2;

    void readData()
    {
        University::readData();
        Student::readData();
        Faculty::readData();
        cout << "\nEnter Names Of Subjects 1 And 2 : ";
        cin >> Sub1 >> Sub2;
    }
    void displayData()
    {
        University::displayData();
        Student::displayData();
        Faculty::displayData();
        cout << "\nSubject 1 : " << Sub1
             << "\nSubject 2 : " << Sub2
             << "\n";
    }
};

int main(void)
{
    Subject Obj;
    Obj.readData();
    Obj.displayData();
    return 0;
}
