# include <iostream>

using namespace std;

class Travel
{
    int tCode, noOfAdults, noOfChildren;
    float Distance, totalFare;
    string Src, Dest;
  public:
    Travel()
    {
        tCode = 1001;
        Src = "Agra";
        Dest = "Chennai";
        Distance = 400.00;
        noOfAdults = 3;
        noOfChildren = 2;
    }
    Travel(const Travel &t)
    {
        tCode = t.tCode;
        Src = t.Src;
        Dest = t.Src;
        Distance = t.Distance;
        noOfAdults = t.noOfAdults;
        noOfChildren = t.noOfChildren;
    }
    void getDetails()
    {
        cout << "\nEnter The Travel Code : ";
        cin >> tCode;
        cout << "Enter The Source : ";
        cin >> Src;
        cout << "Enter The Destination : ";
        cin >> Dest;
        cout << "Enter The Travel Distance : ";
        cin >> Distance;
        cout << "Enter The Number Of Adults : ";
        cin >> noOfAdults;
        cout << "Enter The Number Of Children : ";
        cin >> noOfChildren;
    }
    int computeCost()
    {
      float childFare, adultFare;
        if(Distance < 500)
          {
              adultFare = 200 * noOfAdults;
              childFare = 100 * noOfChildren;
          }
        else if(Distance > 500 && Distance < 1000)
          {
              adultFare = 300 * noOfAdults;
              childFare = 150 * noOfChildren;
          }
        else
          {
            adultFare = 500 * noOfAdults;
            childFare = 250 * noOfChildren;
          }
      totalFare = childFare + adultFare;
    }
    void displayDetails()
    {
      cout   << "\nTravel Code : " << tCode
             << "\nNumber Of Adults : " << noOfAdults
             << "\nNumber Of Children : " << noOfChildren
             << "\nSource : " << Src
             << "\nDestination : " << Dest
             << "\nTravel Distance : " << Distance << " Km"
             << "\nTotal Cost : Rs. " << totalFare << "/-"
             << "\n";
    }
~Travel()
     {
        tCode = noOfAdults = noOfChildren = Distance = totalFare = 0;
        Src[0] = Dest[0] = '\0';
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
