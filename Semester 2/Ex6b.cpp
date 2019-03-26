# include <iostream>

using namespace std;

template <class T>

class Stack
{
  public:
    int Top, Size;
    T Arr[10];

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

    T peek()
    {
        return Arr[Top];
    }

    void displayStack()
    {
        cout << "\nThe stack elements are : ";
          for(int i = Top ; i >= 0 ; i--)
          {
                cout << Arr[i] << " ";
          }
      cout << endl;
    }
};

void Menu();
void stackMenu()
{
 int Choice, Ch;
   Stack <int> iObj;
   Stack <float> fObj;
   Stack <char> cObj;
    while(Choice != 4)
      {
        cout << "\nChoose Any One Of The Following Choices :-"
             << "\n1. Populate The Stack"
             << "\n2. Pop An Element"
             << "\n3. Dislay The Stack"
             << "\n4. Return To Main Menu"
             << "\nYour Choice Is...";
        cin >> Choice;
         switch(Choice)
          {
            case 1 : cout << "\nEnter the element to be inserted : ";
                     cin >> Ch;
                     iObj.Push(Ch);
                      break;

            case 2 : iObj.Pop();
                      break;

            case 3 : iObj.displayStack();
                      break;

            case 4 : Menu();
                      break;

            default : cout << "\nInvalid Choice.\n";
                       break;
          }
      }
}

void Menu()
{
   int Choice;
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
            case 1 :
            case 2 :
            case 3 : stackMenu();
                      break;
            case 4 : cout << "\nPress Any key to exit the program.\n";
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
