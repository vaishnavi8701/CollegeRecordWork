# include <iostream>

using namespace std;

class Time
{
    int Hours, Minutes, Seconds;
  public:
    void readTime()
    {
        cout << "\nEnter Number Of Hours...";
        cin >> Hours;
        cout << "Enter Number Of Minutes...";
        cin >> Minutes;
        cout << "Enter Number Of Seconds...";
        cin >> Seconds;
    }
    void addTime(Time t1, Time t2)
    {
        Seconds = t1.Seconds + t2.Seconds;
        Minutes = t1.Minutes + t2.Minutes + (Seconds / 60);
        Hours = t1.Hours + t2.Hours + (Minutes / 60);
        Seconds %= 60;
        Minutes %= 60;
    }
    void displayTime()
    {
        cout << "\nTime In Hours : Minutes : Seconds Format Is " << Hours << ":" << Minutes << ":" << Seconds << '\n';
    }
};

int main(void)
{
    Time Obj1, Obj2, Obj3;
    Obj1.readTime();
    Obj2.readTime();
    Obj3.addTime(Obj1, Obj2);
    Obj3.displayTime();
    return 0;
}
