# include <iostream>

using namespace std;

class Matrix
{
    int Arr[3][3];
  public:

    void readMatrix()
    {
          for(int i = 0 ; i < 3 ; i++)
           {
              for(int j = 0 ; j < 3 ; j++)
               {
                  cin >> Arr[i][j];
               }
           }
    }

    void printMatrix()
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

    Matrix operator +(Matrix &Obj)
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

    Matrix operator -(Matrix &Obj)
    {
      Matrix Res;
          for(int i = 0 ; i < 3 ; i++)
           {
              for(int j = 0 ; j < 3 ; j++)
               {
                 Res.Arr[i][j] = Arr[i][j] - Obj.Arr[i][j];
               }
           }
      return Res;
    }

    Matrix operator -()
    {
      Matrix Res;
          for(int i = 0 ; i < 3 ; i++)
           {
              for(int j = 0 ; j < 3 ; j++)
               {
                 Res.Arr[i][j] = -1 * Arr[i][j];
               }
           }
      return Res;
    }

    Matrix operator ++()
    {
      Matrix Res;
          for(int i = 0 ; i < 3 ; i++)
           {
              for(int j = 0 ; j < 3 ; j++)
               {
                 Res.Arr[i][j] = ++Arr[i][j];
               }
           }
      return Res;
    }

    Matrix operator --()
    {
      Matrix Res;
          for(int i = 0 ; i < 3 ; i++)
           {
              for(int j = 0 ; j < 3 ; j++)
               {
                 Res.Arr[i][j] = --Arr[i][j];
               }
           }
      return Res;
    }

    Matrix operator --(int)
    {
      Matrix Res;
          for(int i = 0 ; i < 3 ; i++)
           {
              for(int j = 0 ; j < 3 ; j++)
               {
                 Res.Arr[i][j] = Arr[i][j]--;
               }
           }
      return Res;
    }

    Matrix operator ++(int)
    {
      Matrix Res;
          for(int i = 0 ; i < 3 ; i++)
           {
              for(int j = 0 ; j < 3 ; j++)
               {
                 Res.Arr[i][j] = Arr[i][j]++;
               }
           }
      return Res;
    }

};

void Menu()
{
    int Choice;
    Matrix m1, m2, Res;
    cout << "\nEnter The First Matrix:-\n";
    m1.readMatrix();
    cout << "\nEnter The Second Matrix:-\n";
    m2.readMatrix();
      while(Choice != 8)
        {
            cout << "\nChoose Any One Of The Following Choices :-"
                 << "\n1. Addition"
                 << "\n2. Subtraction"
                 << "\n3. Negation"
                 << "\n4. Pre-Incrementation"
                 << "\n5. Post-Incrementation"
                 << "\n6. Pre-Decrementation"
                 << "\n7. Post-Decrementation"
                 << "\n8. Exit"
                 << "\nYour Choice Is : ";
            cin >> Choice;
            cout << endl;
              switch(Choice)
                {
                    case 1 : Res = m1 + m2;
                              break;

                    case 2 : Res = m1 - m2;
                              break;

                    case 3 : Res = -m1;
                              break;

                    case 4 : Res = ++m1;
                              break;

                    case 5 : Res = m1++;
                              break;

                    case 6 : Res = --m1;
                              break;

                    case 7 : Res = m1--;
                              break;

                    case 8 : exit(0);
                              break;

                  default : cout << "\nInvalid Choice.\n";
                }
            Res.printMatrix();
        }
}
int main(void)
{
    Menu();
    return 0;
}
