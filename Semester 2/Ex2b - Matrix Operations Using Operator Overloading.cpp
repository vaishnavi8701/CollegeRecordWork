# include <iostream>

using namespace std;

class Matrix
{
    int Arr[3][3];
  public:
    int readMatrix()
    {
          for(int i = 0 ; i < 3 ; i++)
           {
              for(int j = 0 ; j < 3 ; j++)
               {
                  cin >> Arr[i][j];
               }
           }
    }

    int printMatrix()
    {
          for(int i = 0 ; i < 3 ; i++)
           {
              for(int j = 0 ; j < 3 ; j++)
               {
                 cout << Arr[i][j] << " ";
               }
             cout << endl;
           }
    }

    Matrix operator +(Matrix Obj)
    {
      Matrix Res;
          for(int i = 0 ; i < 3 ; i++)
           {
              for(int j = 0 ; j < 3 ; j++)
               {
                 Res.Arr[i][j] = Arr[i][j] + Obj.Arr[i][j];
               }
           }
      return Res;
    }
};

int main(void)
{
   Matrix m1, m2;
   cout << "\nEnter The First Matrix :-\n";
   m1.readMatrix();
   cout << "\nEnter The Second Matrix :-\n";
   m2.readMatrix();
   cout << "\nThe Sum Of The Two Matrices Is :-\n";
   Matrix Sum = m1 + m2;
   Sum.printMatrix();
   return 0;
}
