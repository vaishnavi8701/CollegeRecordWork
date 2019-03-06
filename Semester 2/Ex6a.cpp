# include <iostream>

using namespace std;

class Vehicle
{
  protected:
    int regNo;
    char Model[20];
  public:
    virtual void readData()
    {

    }
    virtual void showData()
    {

    }
};

class Car : public Vehicle
{
  public:

    void readData()
    {
        cout << "\nEnter Car Registration Number : ";
        cin >> regNo;
        cout << "Enter Car Model : ";
        cin >> Model;
    }

    void showData()
    {
        cout << "\nRegistration Number : " << regNo
             << "\nModel : " << Model
             <<"\n";
    }

};


int main(void)
{
    Vehicle *Vptr;
    Car Obj;
    Vptr = &Obj;
    Vptr -> readData();
    Vptr -> showData();
    return 0;
}
