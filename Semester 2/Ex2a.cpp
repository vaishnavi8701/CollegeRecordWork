# include <iostream>

using namespace std;

class Add2;

class Add1
{
    int a, b;
  public:
    friend int addNum(Add1, Add2);
    void getNum1()
    {
        cout << "\nEnter Two Numbers : ";
        cin >> a >> b;
    }
};

class Add2
{
    int c, d;
  public:
    friend int addNum(Add1, Add2);
    void getNum2()
    {
        cout << "Enter Two Numbers : ";
        cin >> c >> d;
    }
};

int addNum(Add1 Obj1, Add2 Obj2)
{
   int Sum1 = Obj1.a + Obj1.b;
   int Sum2 = Obj2.c + Obj2.d;
   return Sum1 + Sum2;
}

int main(void)
{
   Add1 a1;
   Add2 a2;
   a1.getNum1();
   a2.getNum2();
   int Sum = addNum(a1, a2);
   cout << "The sum of the numbers is : " << Sum << endl;
   return 0;
}
                                                                                                                                                
