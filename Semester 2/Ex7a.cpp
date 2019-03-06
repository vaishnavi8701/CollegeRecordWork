# include <iostream>
# include <string.h>

using namespace std;

template <class T, class T1>
T sort(T Arr[], T1 n)
{
   T Temp;
     for(int i = 0 ; i < n - 1 ; i++)
      {
       for(int j = 0 ; j < n - i - 1 ; j++)
        {
         if(Arr[j] > Arr[j + 1])
          {
            Temp = Arr[j];
            Arr[j] = Arr[j + 1];
            Arr[j + 1] = Temp;
          }
        }
      }
}

void Menu()
{
   int Choice;
     while(Choice != 4)
      {
        cout << "\nChoose Any One Of The Following Choices :-"
             << "\n1. Sort An Integer Array"
             << "\n2. Sort A Floating Point Array"
             << "\n3. Sort A String"
             << "\n4. Exit"
             << "\nYour Choice Is...";
        cin >> Choice;
          switch(Choice)
           {
                case 1 :
                         int n1, iArr[100];
                         cout << "\nEnter The Size Of The Array : ";
                         cin >> n1;
                         cout << "Enter The Array Elements : ";
                           for(int i = 0 ; i < n1 ; i++)
			                      {
                                cin >> iArr[i];
                            }
                         sort(iArr, n1);
                         cout << "Sorted Result : ";
                           for(int i = 0 ; i < n1 ; i++)
                            {
                                cout << iArr[i] << " ";
                            }
                          break;

                case 2 : int n2;
                         cout << "\nEnter The Size Of The Array : ";
                         cin >> n2;
                         float fArr[100];
                         cout << "Enter The Array Elements : ";
                           for(int i = 0 ; i < n2 ; i++)
                            {
                                cin >> fArr[i];
                            }
                         sort(fArr, n2);
                         cout << "Sorted Result : ";
                           for(int i = 0 ; i < n2 ; i++)
                            {
                                cout << fArr[i] << " ";
                            }
                          break;

                case 3 : {
                          char Str[10];
                          cout << "\nEnter A String : ";
                          cin >> Str;
                          int n3 = strlen(Str);
                          sort(Str, n3);
                          cout << "Sorted Result : " << Str;
                           break;
                         }

                case 4 : cout << "\nExiting Program...";
                          break;

                default : cout << "\nInvaid Choice.";
           }
        cout << '\n';
      }
}

int main(void)
{
   Menu();
   return 0;
}
