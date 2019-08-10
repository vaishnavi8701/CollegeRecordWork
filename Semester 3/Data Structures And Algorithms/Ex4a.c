# include <stdio.h>
# include <stdlib.h>

struct Node
{
  int Data;
  struct Node *Prev, *Next;
}*Head, *Temp, *n;

void createHead(int x)
{
  Head = (struct Node*)malloc(sizeof(struct Node));
  Head -> Data = x;
  Head -> Prev = Head -> Next = NULL;
  printf("%d has been inserted as head node.\n", x);
}

void insertAtBeg(int x)
{
  Temp = (struct Node*)malloc(sizeof(struct Node));
  Temp -> Data = x;
  Temp -> Prev = NULL;
  Temp -> Next = Head;
  Head -> Prev = Temp;
  Head = Temp;
  printf("%d has been inserted into the list.\n", x);
}

void insertAtEnd(int x)
{
  Temp = (struct Node*)malloc(sizeof(struct Node));
  Temp -> Data = x;
  Temp -> Next = NULL;

  n = Head;
  while(n -> Next != NULL)
  {
    n = n -> Next;
  }
  n -> Next = Temp;
  Temp -> Prev = n;
  printf("%d has been inserted into the list.\n", x);
}

void insertAtPos(int Pos, int x)
{
   Temp = (struct Node*)malloc(sizeof(struct Node));
   Temp -> Data = x;
   n = Head;
   int i;
   for(i = 1 ; i < Pos - 1 ; i++)
   {
     n = n -> Next;
   }

   Temp -> Next = n -> Next;
   n -> Next -> Prev = Temp;
   n -> Next = Temp;
   Temp -> Prev = n;
   printf("%d has been inserted into the list.\n", x);
}

void findPos(int x)
{
  n = Head;
  int Count = 1;

  while(n != NULL && n -> Data != x)
  {
    n = n -> Next;
    Count++;
  }

  if(n == NULL)
  {
    printf("Element not found.\n");
  }
  else
  {
    printf("Element present at position %d\n", Count);
  }
}

void delByVal(int x)
{
  n = Head;
  if(Head != NULL && Head -> Data == x)
  {
    Head = n -> Next;
    n -> Next -> Prev = NULL;
    printf("%d has been deleted from the list.\n", x);
    free(n);
    return ;
  }

  while(n != NULL && n -> Data != x)
  {
    n = n -> Next;
  }

  if(n == NULL)
  {
    printf("Element not found.\n");
    return ;
  }

  if(n -> Next == NULL)
  {
    n -> Prev -> Next = n -> Next;
    printf("%d has been deleted from the list.\n", x);
    free(n);
    return ;
  }

  n -> Prev -> Next = n -> Next;
  n -> Next -> Prev = n -> Prev;
  printf("%d has been deleted from the list.\n", x);
  free(n);
}

void delByPos(int Pos)
{
  n = Head;
  if(Head != NULL && Pos == 1)
  {
    Head = n -> Next;
    n -> Next -> Prev = NULL;
    printf("Element has been deleted from position %d\n", Pos);
    free(n);
    return ;
  }

  int i;
  for(i = 1 ; i < Pos ; i++)
  {
    n = n -> Next;
  }

  n -> Prev -> Next = n -> Next;
  if(n -> Next != NULL)
  {
    n -> Next -> Prev = n -> Prev;
  }
  printf("Element has been deleted from position %d\n", Pos);
  free(n);
}

void displayList()
{
  if(Head == NULL)
  {
    printf("\nList is empty. No elements to display.");
    return ;
  }

  n = Head;
  printf("\nThe elements of the list are : ");
  while(n != NULL)
  {
    printf("%d ", n -> Data);
    n = n -> Next;
  }
  printf("\n");
}

void Menu()
{
  int Choice;
  while(Choice != 8)
  {
    printf("\nEnter Any One Of The Following Choices:-"
           "\n1. Insert At The Beginning"
           "\n2. Insert At The End"
           "\n3. Insert At The Given Position"
           "\n4. Display Position Of A Specific Element"
           "\n5. Delete By Value"
           "\n6. Delete By Position"
           "\n7. Display the list"
           "\n8. Exit"
           "\nYour Choice Is : ");
    scanf("%d", &Choice);
    int Pos, Val;
    switch(Choice)
    {
        case 1 : printf("\nEnter the value to be inserted : ");
                 scanf("%d", &Val);
                 insertAtBeg(Val);
                  break;

        case 2 : printf("\nEnter the value to be inserted : ");
                 scanf("%d", &Val);
                 insertAtEnd(Val);
                  break;

        case 3 : printf("\nEnter the value and position for insertion : ");
                 scanf("%d %d", &Val, &Pos);
                 insertAtPos(Pos, Val);
                  break;

        case 4 : printf("\nEnter the value for search : ");
                 scanf("%d", &Val);
                 findPos(Val);
                  break;

        case 5 : printf("\nEnter the value for deletion : ");
                 scanf("%d", &Val);
                 delByVal(Val);
                  break;

        case 6 : printf("\nEnter the position for deletion : ");
                 scanf("%d", &Pos);
                 delByPos(Pos);
                  break;

        case 7 : displayList();
                  break;

        case 8 : break;

        default : printf("\nInvalid choice.\n");
    }
  }
}

int main(void)
{
  int Num;
  printf("\nEnter data for head node : ");
  scanf("%d", &Num);
  createHead(Num);
  Menu();
  return 0;
}
