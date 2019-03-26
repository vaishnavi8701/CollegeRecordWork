# include <iostream>

using namespace std;

class Personal
{

  protected:

      char Name[20], Dept[20], DOB[20], phoneNo[20];
      int rollNo;

  public:

    void readData()
    {
        cout << "\nEnter Student Roll Number : ";
        cin >> rollNo;
        cout << "Enter Student Name : ";
        cin >> Name;
        cout << "Enter Student DOB : ";
        cin >> DOB;
        cout << "Enter Student Department : ";
        cin >> Dept;
        cout << "Enter Student Phone Number : ";
        cin >> phoneNo;
    }

};

class Marks
{

  protected:

    float Marks[5], Avg;

  public:

      void getMarks()
      {
        float Total = 0;
        cout << "Enter Student Marks :-\n";
            for(int i = 0 ; i < 5 ; i++)
              {
                  cout << "Subject " << i + 1 << " : ";
                  cin >> Marks[i];
                  Total += Marks[i];
              }
        Avg = Total / 5.0;
      }

      int returnAvg()
      {
          return Avg;
      }

};

class CMS : public Personal, public Marks
{
  public:

    void readData()
    {
        Personal::readData();
        Marks::getMarks();
    }

    void displayData()
    {
        cout << "\nRoll Number : " << rollNo
             << "\nName : " << Name
             << "\nDate Of Birth : " << DOB
             << "\nDepartment : " << Dept
             << "\nPhone Number : " << phoneNo
             << "\nAverage Marks : " << Marks::returnAvg()
             << "\n";
    }

};

int main(void)
{
    CMS Obj;
    Obj.readData();
    Obj.displayData();
    return 0;
}
