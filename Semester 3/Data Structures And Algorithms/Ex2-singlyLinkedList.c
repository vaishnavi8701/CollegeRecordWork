# include <stdio.h>
# include <stdlib.h>

struct Node
{
    int Data;
    struct Node *Next;
}*Head, *Temp, *Prev, *n;

void createList(int Val)
{
    Head = (struct Node*)malloc(sizeof(struct Node));
    Head -> Data = Val;
    Head -> Next = NULL;
    printf("%d has been inserted as head node.\n", Val);
}

void insertAtBeg(int Val)
{
    Temp = (struct Node*)malloc(sizeof(struct Node));
    Temp -> Data = Val;
    Temp -> Next = Head;
    Head = Temp;
    printf("%d has been inserted into the list.\n", Val);
}

void insertAtEnd(int Val)
{
    Temp = (struct Node*)malloc(sizeof(struct Node));
    Temp -> Data = Val;
    Temp -> Next = NULL;
    n = Head;
    while(n -> Next != NULL)
    {
        n = n -> Next;
    }
    n -> Next = Temp;
    printf("%d has been inserted into the list.\n", Val);
}

void insertAtPos(int Pos, int Val)
{
    Temp = (struct Node*)malloc(sizeof(struct Node));
    Temp -> Data = Val;
    n = Head;
    int i;
    for(i = 1 ; i < Pos - 1 ; i++)
    {
        n = n -> Next;
    }
    Temp -> Next = n -> Next;
    n -> Next = Temp;
    printf("%d has been inserted into the list.\n", Val);
}

void deleteByValue(int Val)
{
    Prev = NULL;
    n = Head;
    while(n != NULL && n -> Data != Val)
    {
        Prev = n;
        n = n -> Next;
    }
    if(n == NULL)
    {
        printf("No such element not present in the list.\n");
        return ;
    }
    Prev -> Next = n -> Next;
    printf("%d has been deleted from the list.\n", Val);
    free(n);
}

void deleteByPos(int Pos)
{
    n = Head;
    if(Pos == 1)
    {
        Head = n -> Next;
        printf("Element at position %d has been deleted from the list.\n", Pos);
        free(n);
        return ;
    }

    int i;
    for(i = 1 ; n != NULL && i < Pos - 1 ; i++)
    {
        n = n -> Next;
    }

    if(n == NULL || n -> Next == NULL)
    {
        printf("Position exceeds capacity of the linked list.\n");
        return ;
    }

    struct Node *delPtr = n -> Next;
    n -> Next = delPtr -> Next;
    printf("Element at position %d has been deleted from the list.\n", Pos);
    free(delPtr);
}

void findElement(int Val)
{
    n = Head;
    while(n != NULL && n -> Data != Val)
    {
        n = n -> Next;
    }
    if(n == NULL)
    {
        printf("Element not found in the list.\n");
        return ;
    }
    printf("Element is present in the list.\n");
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
               "\n1. Insert at the beginning"
               "\n2. Insert at the end"
               "\n3. Insert at a given position"
               "\n4. Delete by value"
               "\n5. Delete by position"
               "\n6. Check if an element is present"
               "\n7. Display the list"
               "\n8. Exit"
               "\nYour choice is : ");
        scanf("%d", &Choice);
        int Pos, Val;
        switch(Choice)
        {
            case 1 : printf("\nEnter value for insertion : ");
                     scanf("%d", &Val);
                     insertAtBeg(Val);
                      break;

            case 2 : printf("\nEnter value for insertion : ");
                     scanf("%d", &Val);
                     insertAtEnd(Val);
                      break;

            case 3 : printf("\nEnter value and position for insertion : ");
                     scanf("%d %d", &Val, &Pos);
                     insertAtPos(Pos, Val);
                      break;

            case 4 : printf("\nEnter value for deletion : ");
                     scanf("%d", &Val);
                     deleteByValue(Val);
                      break;

            case 5 : printf("\nEnter position for deletion : ");
                     scanf("%d", &Pos);
                     deleteByPos(Pos);
                      break;

            case 6 : printf("\nEnter value for search operation : ");
                     scanf("%d", &Val);
                     findElement(Val);
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
    printf("\nEnter data to be inserted at head : ");
    scanf("%d", &Num);
    createList(Num);
    Menu();
    return 0;
}
