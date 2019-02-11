# include <iostream>

using namespace std;

class Travel
{
    int noOfAdults, noOfChildren;
    float Distance, totalCost;
  public:
    Travel()
    {
        noOfAdults = noOfChildren = Distance = totalCost = 0;
    }
    Travel(int Num1, int Num2, float Space, float Price)
    {
        noOfAdults = Num1;
        noOfChildren = Num2;
        Distance = Space;
        totalCost = Price;
    }
    Travel(Travel &t)
    {
        noOfAdults = t.noOfAdults;
        noOfChildren = t.noOfChildren;
        Distance = t.Distance;
        totalCost = t.totalCost;
    }
    void getDetails()
    {
        cout << "\nEnter The Number Of Adults : ";
        cin >> noOfAdults;
        cout << "Enter The Number Of Children : ";
        cin >> noOfChildren;
        cout << "Enter The Travel Distance : ";
        cin >> Distance;
    }
    void computeCost()
    {
        totalCost = Distance * ( (noOfAdults * 8) + (noOfChildren * 5) );
         if(Distance >= 500)
          {
            Distance -= 500;
            totalCost += Distance *( (noOfAdults * 10) + (noOfChildren * 6) );
          }
    }
    void displayDetails()
    {
        cout << "\nNumber Of Adults : " << noOfAdults
             << "\nNumber Of Children : " << noOfChildren
             << "\nTravel Distance : " << Distance
             << "\nTotal Cost : " << totalCost
             << "\n";
    }
~Travel()
     {
        noOfAdults = noOfChildren = Distance = totalCost = 0;
     }
};

int main(void)
{
   Travel Obj;
   Obj.getDetails();
   Obj.computeCost();
   Obj.displayDetails();
   return 0;
}
