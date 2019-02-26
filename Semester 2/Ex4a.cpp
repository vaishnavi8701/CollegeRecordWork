# include <iostream>

using namespace std;

class Array
{
  public:

   void calcSum(int intArr[5])
   {
        int Sum = 0;
        cout << "\nEnter 5 Array Elements : ";
          for(int i = 0 ; i < 5 ; i++)
           {
              cin >> intArr[i];
              Sum += intArr[i];
           }
        cout << "The Sum Of The Array Elements Is : " << Sum << endl;
   }

   void calcSum(float floatArr[5])
   {
        float Sum = 0;
        cout << "\nEnter 5 Array Elements : ";
          for(int i = 0 ; i < 5 ; i++)
           {
              cin >> floatArr[i];
              Sum += floatArr[i];
           }
        cout << "The Sum Of The Array Elements Is : " << Sum << endl;
   }

};

int main(void)
{
        Array Obj;
        int iArr[5];
        float fArr[5];
        Obj.calcSum(iArr);
        Obj.calcSum(fArr);
        cout << endl;
        return 0;
}
