# include <iostream>

using namespace std;

template <class T>

class Stack
{
  int Top, Size;
  T Arr[10];

  public:
    Stack()
    {
        Top = -1;
        Size = 5;
    }

    void Push(T n)
    {
        if(Top == Size - 1)
         {
           cout << "Stack Overflow. Cannot insert element.\n";
         }
        else
         {
            Arr[++Top] = n;
         }
    }

    void Pop()
    {
        if(Top == -1)
          {
              cout << "\nStack underflow. No element to pop.\n";
          }

        else
          {
              cout << '\n' << Arr[Top--] << " has been popped.\n";
          }
    }

    T Peep()
    {
        return Arr[Top];
    }

    void displayStack()
    {
      if(Top == -1)
       {
           cout << "\nStack Is Empty. Nothing to display.";
       }
      else
       {
         cout << "\nThe stack elements are : ";
           for(int i = Top ; i >= 0 ; i--)
            {
              cout << Arr[i] << " ";
            }
         cout << endl;
       }
    }
};

void Menu();
template <class T, class T1>
void stackMenu(T Obj, T1 Ch)
{
   int Choice;
    while(Choice != 5)
      {
        cout << "\nChoose Any One Of The Following Choices :-"
             << "\n1. Populate The Stack"
             << "\n2. Pop An Element"
             << "\n3. Peep Into The Stack"
             << "\n4. Dislay The Stack"
             << "\n5. Return To Main Menu"
             << "\nYour Choice Is...";
        cin >> Choice;
         switch(Choice)
          {
            case 1 : cout << "\nEnter the element to be inserted : ";
                     cin >> Ch;
                     Obj.Push(Ch);
                      break;

            case 2 : Obj.Pop();
                      break;

            case 3 : cout << "\nThe Element At The Top Of The Stack Is : " << Obj.Peep() << endl;
                      break;

            case 4 : Obj.displayStack();
                      break;

            case 5 : Menu();
                      break;

            default : cout << "\nInvalid Choice.\n";
                       break;
          }
      }
}

void Menu()
{
   int Choice, iNum;
   float fNum;
   char cNum;
   Stack <int> iObj;
   Stack <float> fObj;
   Stack <char> cObj;
     while(Choice != 4)
      {
        cout << "\nChoose Any One Of The Following Choices :-"
             << "\n1. Integer Array Stack"
             << "\n2. Floating-Point Array Stack"
             << "\n3. Character Array Stack"
             << "\n4. Exit"
             << "\nYour Choice Is...";
        cin >> Choice;
         switch(Choice)
          {
            case 1 : stackMenu(iObj, iNum);
                      break;
            case 2 : stackMenu(fObj, fNum);
                       break;
            case 3 : stackMenu(cObj, cNum);
                      break;
            case 4 : exit(0);
                      break;
            default : cout << "\nInvalid Choice.\n";
          }
      }
}

int main(void)
{
  Menu();
	return 0;
}
