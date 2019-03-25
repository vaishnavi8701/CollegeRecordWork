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
    int computeCost()
    {
         if(Distance >= 500)
          {
            int d = Distance - 500;
            totalCost += d * ( (noOfAdults * 10) + (noOfChildren * 6) );
            totalCost += 500 * ( (noOfAdults * 8) + (noOfChildren * 5) );
            return 0;
          }
        totalCost = Distance * ( (noOfAdults * 8) + (noOfChildren * 5) );
    }
    void displayDetails()
    {
        cout << "\nNumber Of Adults : " << noOfAdults
             << "\nNumber Of Children : " << noOfChildren
             << "\nTravel Distance : " << Distance << " Km"
             << "\nTotal Cost : Rs. " << totalCost << "/-"
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
