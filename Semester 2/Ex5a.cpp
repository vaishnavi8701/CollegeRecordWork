# include <iostream>

using namespace std;

class Array
{
    int Arr[5];

  public:

    void getArray()
    {
        cout << "Enter 5 Array Elements : ";
          for(int i = 0 ; i < 5 ; i++)
           {
             cin >> Arr[i];
           }
    }

    void dispArray()
    {
        cout << "\nResultant Array : ";
          for(int i = 0 ; i < 5 ; i++)
           {
             cout << Arr[i] << " ";
           }
        cout << endl;
    }

    friend Array operator +(Array &a1, Array &a2);
};

Array operator +(Array &a1, Array &a2)
{
   Array Sum;
        for(int i = 0 ; i < 5 ; i++)
         {
           Sum.Arr[i] = a1.Arr[i] + a2.Arr[i];
         }
   return Sum;
}

int main(void)
{
        Array Obj1, Obj2;
        cout << endl;
        Obj1.getArray();
        Obj2.getArray();
        Array arrSum = Obj1 + Obj2;
        arrSum.dispArray();
        return 0;
}
