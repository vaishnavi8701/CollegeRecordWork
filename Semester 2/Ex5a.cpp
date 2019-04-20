# include <iostream>

using namespace std;

class Train
{
  protected:
    char Name[20], Src[20], Dest[20];
    int Age, Dist;
  public:
    int Tickets;
    void readData()
    {
        cout << "\nEnter Passenger Name : ";
        cin >> Name;
        cout << "Enter Passenger Age : ";
        cin >> Age;
        cout << "Enter Starting Station : ";
        cin >> Src;
        cout << "Enter Destination : ";
        cin >> Dest;
        cout << "Enter Distance : ";
        cin >> Dist;
        cout << "Enter Number Of Tickets : ";
        cin >> Tickets;
    }
};

class General : public Train
{
  protected:

    char AC;
    float Cost;

  public:

    void readData()
    {
        Train::readData();
        cout << "Do you want an A/C coach <y/n> : ";
        cin >> AC;
          if(Dist < 1000)
            {
                Cost = Dist * 10;
            }
          if(Dist >= 1000)
            {
                Cost = (Dist - 1000) * 15 + 9990;
            }
          if(AC == 'y')
            {
                Cost += 150;
            }
    }

    void displayCost()
    {
        cout << "You have to pay : Rs. " << Cost * Tickets << endl;
    }

};

class Tatkal : public Train
{
  protected:
    int Cost;
  public:
    void readData()
    {
        Train::readData();
        Cost = 200 + (Dist * 20);
    }
    void displayCost()
    {
        cout << "You have to pay : Rs. " << Cost * Tickets << endl;
    }
};

void Menu()
{
    int Choice;
      while(Choice != 3)
        {
            cout << "\nChoose Any One Of The Following Choices :-"
                 << "\n1. General Booking"
                 << "\n2. Tatkal Booking"
                 << "\n3. Exit"
                 << "\nYour Choice Is : ";
            cin >> Choice;
              switch(Choice)
                {
                    case 1 :
                              General G;
                              G.readData();
                                if(G.Tickets <= 10)
                                  {
                                      G.displayCost();
                                  }
                                else
                                  {
                                      cout << "\nSorry. Not Enough Tickets Available. Proceed To Tatkal Booking\n";

                                  }
                               break;

                    case 2 :
                              Tatkal T;
                              T.readData();
                              T.displayCost();
                               break;

                    case 3 :
                              cout << "\nExiting The Program...";
                               break;

                    default : cout << "\nInvalid Choice.\n";
                }
        }
}

int main(void)
{
    Menu();
    return 0;
}
