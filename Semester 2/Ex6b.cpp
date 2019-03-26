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
         for(int i = 0 ; i < Size ; i++)
          {
            Arr[i] = NULL;
          }
    }

    void Push(T n)
    {
        Top++;

        if(Top <= Size - 1)
         {
           Arr[Top] = n;
         }

        else if(Top == Size)
         {
           cout << "Stack Is Full.";
         }

        else
         {
           cout << "Stack Overflow...";
         }
    }

    void Pop()
 {
        Top--;
    }

    void displayStack()
    {
          for(int i = 0 ; i < Size ;i++)
          {
                cout << Arr[i] << " ";
          }
    }
};

void Menu();
void stackMenu()
{
 int Choice, Ch;
   Stack <int>iObj;
   Stack <float>fObj;
   Stack <char>cObj;
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
            case 1 : while(iObj.Top <= iObj.Size)
                      {
                        cin >> Ch;
                        iObj.Push(Ch);
                      }
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
   
