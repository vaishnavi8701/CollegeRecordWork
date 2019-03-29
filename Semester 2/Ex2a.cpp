# include <iostream>
# include <string>

using namespace std;

class Car
{
    int Cost;
    string Make, Color;
    static int Id;

  public:

      Car()
      {
          Cost = 200000;
          Make = "Hyundai";
          Color = "Sky Blue";
      }

      void getData()
      {
          cout << "\nEnter The Car Make : ";
          cin >> Make;
          cout << "Enter The Color : ";
          cin >> Color;
          cout << "Enter The Car Cost : ";
          cin >> Cost;
      }

      void putData()
      {
          cout << "\nCar ID : " << Id
               << "\nCar Make : " << Make
               << "\nCar Color : " << Color
               << "\nCar Cost : " << Cost
               << "\n";
      }

      class carUpdate
      {
          int Amount;
        public:
          void Update(Car &Obj)
          {
              cout << "\nEnter The Amount To Be Incremented : ";
              cin >> Amount;
              Obj.Cost += Amount;
          }
      };

      static void IDincrement()
      {
          Id++;
      }

      friend void Modify(Car &c);
};

int Car::Id = 100;

void Modify(Car &c)
{
  cout << "\nEnter The Car Make : ";
  cin >> c.Make;
  cout << "Enter The Color : ";
  cin >> c.Color;
  cout << "Enter The Car Cost : ";
  cin >> c.Cost;
}

int main(void)
{
    Car Obj, Obj1, Obj2;
    Obj.putData();
    cout << "\nCar 1:-\n";
    Obj1.getData();
    Car::IDincrement();
    Obj1.putData();
    cout << "\nCar 2:-\n";
    Obj2.getData();
    Car::IDincrement();
    Obj2.putData();
    Car::carUpdate Obj3;
    cout << "\nUpdated Cost for Car 1:-\n";
    Obj3.Update(Obj1);
    Obj1.putData();
    cout << "\nEnter modified detail for Car 2:-\n";
    Modify(Obj2);
    Obj2.putData();
    return 0;
}
