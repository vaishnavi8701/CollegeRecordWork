# include <iostream>

using namespace std;

int printPos(int Arr[], int x)
{
    if(x < 1 || x > 5)
      {
          throw "Array out of bounds.";
      }
  return Arr[x - 1];
}
int main()
{
    int Arr[5] = {1, 2, 3, 4, 5}, Num;
    try
      {
          int Pos;
          cout << "\nEnter the position of the element you want to access : ";
          cin >> Pos;
          Num = printPos(Arr, Pos);
          cout << Num << endl;
      }
    catch(const char *Msg)
      {
        cout << Msg << endl;
      }
    return 0;
}
