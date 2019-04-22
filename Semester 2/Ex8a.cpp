# include <iostream>

using namespace std;

class Divide
{
    int a, b, c;

  public:

    void readData()
    {
        cout << "\nEnter Two Numbers : ";
        cin >> a >> b;
    }

    void computeResult()
    {
        try
          {
              if(b == 0)
                {
                    throw "Division by zero is not permitted.";
                }
              else
                {
                    c = a / b;
                    cout << c << " is the quotient." << endl;
                }
          }
        catch(const char *Str)
          {
              cout << Str << endl;
          }
    }
};

int main(void)
{
    Divide Obj;
    Obj.readData();
    Obj.computeResult();
    return 0;
}
