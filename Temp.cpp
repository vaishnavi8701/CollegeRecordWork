# include <iostream>

using namespace std;

class Time
{
  public:
    int Hours, Minutes, Seconds;
    void readTime()
    {
        cout << "\nEnter Number Of Hours...";
        cin >> Hours;
        cout << "Enter Number Of Minutes...";
        cin >> Minutes;
        cout << "Enter Number Of Seconds...";
        cin >> Seconds;
    }
    void displayTime()
    {
        cout << "\nTime In Hours : Minutes : Seconds Format Is " << Hours << ":" << Minutes << ":" << Seconds << '\n';
    }
};

int main(void)
{
    Time Obj1, Obj2;
    int Hours, Minutes, Seconds;
    cout << "\nTime 1:-\n";
    Obj1.readTime();
    Obj1.displayTime();
    cout << "\nTime 2:-\n";
    Obj2.readTime();
    Obj2.displayTime();
    Seconds = Obj1.Seconds + Obj2.Seconds;
    Minutes = Obj1.Minutes + Obj2.Minutes + (Seconds / 60);
    Hours = Obj1.Hours + Obj2.Hours + (Minutes / 60);
    Seconds %= 60;
    Minutes %= 60;
    cout << "\nSum Of The Two Times Is..." << Hours << ":" << Minutes << ":" << Seconds << '\n';
    return 0;
}

