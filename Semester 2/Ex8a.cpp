# include <iostream>
# include <list>
# include <iterator>
# include <algorithm>

using namespace std;

void Menu()
{
    int Choice = 0, Pos, n, Num, Flag;
    list <int> L1, L2;
    list <int> ::iterator it;
      while(Choice != 8)
        {
            cout << "\nChoose Any One Of The Following Choices :-"
                 << "\n1. Create A List"
                 << "\n2. Insert An Element Into The List"
                 << "\n3. Sort The List"
                 << "\n4. Check If An Element Is In The List"
                 << "\n5. Delete An Element From The List"
                 << "\n6. Merge Two Lists"
                 << "\n7. Display The List"
                 << "\n8. Exit"
                 << "\nYour Choice Is : ";
            cin >> Choice;
              switch(Choice)
                {
                    case 1 : cout << "\nEnter The Number Of Elements To Be Inserted : ";
                             cin  >> n;
                             cout << "Enter " << n << " elements : ";
                              for(int i = 0 ; i < n ; i++)
                                {
                                    cin >> Num;
                                    L1.push_back(Num);
                                }
                              break;

                    case 2 : cout << "\n1. Insert At The Beginning"
                                  << "\n2. Insert In The Middle"
                                  << "\n3. Insert At The End"
                                  << "\nYour Choice Is : ";
                             cin >> Choice;
                             cout << "\nEnter The Element To Be Inserted : ";
                             cin >> Num;
                              switch(Choice)
                                {
                                    case 1 : L1.push_front(Num);
                                              break;

                                    case 2 : cout << "Enter The Position To Be Inserted At : ";
                                             cin >> Pos;
                                             it = L1.begin();
                                             advance(it, Pos);
                                             L1.insert(it, Num);
                                             break;

                                    case 3 : L1.push_back(Num);
                                               break;

                                    default : cout << "\nInvalid Choice.\n";
                                }
                              break;

                    case 3 : L1.sort();
                             cout << "\nList Sorted Sucessfully.\n";
                              break;

                    case 4 : cout << "\nEnter The Element You Want To Check For : ";
                             cin >> Num;
                             Flag = binary_search(L1.begin(), L1.end(), Num);
                              if(Flag == 1)
                                {
                                    cout << Num << " exists in the list.\n";
                                }
                              else
                                {
                                    cout << Num << " does not exist in the list.\n";
                                }
                              break;

                    case 5 : cout << "\n1. Delete From The Beginning"
                                << "\n2. Delete From The Middle"
                                << "\n3. Delete From The End"
                                << "\nYour Choice Is : ";
                           cin >> Choice;
                            switch(Choice)
                              {
                                  case 1 : L1.pop_front();
                                            break;

                                  case 2 : cout << "Enter The Position Of The Element To Be Deleted : ";
                                           cin >> Pos;
                                           it = L1.begin();
                                           advance(it, Pos);
                                           L1.erase(it);
                                           break;

                                  case 3 : L1.pop_back();
                                             break;

                                  default : cout << "\nInvalid Choice.\n";
                              }
                            break;

                    case 6 : cout << "\nEnter The Number Of Elements To Be Inserted (Second List) : ";
                           cin  >> n;
                           cout << "Enter " << n << " elements : ";
                            for(int i = 0 ; i < n ; i++)
                              {
                                  cin >> Num;
                                  L2.push_back(Num);
                              }
                            L1.merge(L2);
                            cout << "\nLists merged successfully\n";
                            break;

                    case 7 : cout << "\nThe List Is : ";
                           for(it = L1.begin() ; it != L1.end() ; it++)
                            {
                                cout << *it << " ";
                            }
                            break;

                    case 8 : cout << "\nPress any key to exit.";
                            break;

                    default : cout << "\nInvalid Choice.\n";
                             break;

                }
        }
}
int main(void)
{
    Menu();
    return 0;
}
