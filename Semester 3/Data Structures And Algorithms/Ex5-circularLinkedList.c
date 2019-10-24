# include <stdio.h>
# include <stdlib.h>

struct Node
{
    int Data;
    struct Node *Next;
}*Prev, *Temp, *n;

struct Node *Head = NULL;

void createHead(int x)
{
  Head = (struct Node*)malloc(sizeof(struct Node));
  Head -> Data = x;
  Head -> Next = Head;
  printf("%d has been inserted as head node.\n", x);
}

void insertAtBeg(int x)
{
    Temp = (struct Node*)malloc(sizeof(struct Node));
    Temp -> Data = x;
    n = Head;
    while(n -> Next != Head)
    {
        n = n -> Next;
    }
    n -> Next = Temp;
    Temp -> Next = Head;
    Head = Temp;
    printf("%d has been inserted into the list.\n", x);
}

void insertAtPos(int Pos, int x)
{
    if(Pos == 1)
    {
        insertAtBeg(x);
        return ;
    }

    Temp = (struct Node*)malloc(sizeof(struct Node));
    Temp -> Data = x;
    n = Head;
    int Count = 1;
    do
     {
       Prev = n;
       n = n -> Next;
       Count++;
     }while(n != Head && Count != Pos);

    if(n == Head)
    {
        printf("\nInvalid position input.");
        return ;
    }

    Prev -> Next = Temp;
    Temp -> Next = n;
    printf("%d has been inserted into the list.\n", x);
}

void insertAtEnd(int x)
{
    Temp = (struct Node*)malloc(sizeof(struct Node));
    Temp -> Data = x;
    n = Head;
    while(n -> Next != Head)
    {
        n = n -> Next;
    }
    n -> Next = Temp;
    Temp -> Next = Head;
    printf("%d has been inserted into the list.\n", x);
}

void deleteByValue(int Val)
{
    if(Head -> Data == Val && Head -> Next == Head)
    {
        free(Head);
        return ;
    }

    n = Head;

    if(Head -> Data == Val)
    {
        while(n -> Next != Head)
        {
            n = n -> Next;
        }
        n -> Next = Head -> Next;
        free(Head);
        Head = n -> Next;
        printf("%d has been deleted from the list.\n", Val);
        return ;
    }

    while(n -> Next != Head && n -> Next -> Data != Val)
    {
        n = n -> Next;
    }

    if(n -> Next -> Data == Val)
    {
        struct Node *Del = n -> Next;
        n -> Next = Del -> Next;
        printf("%d has been deleted from the list.\n", Val);
        free(Del);
    }
    else
    {
        printf("Deletion not possible. Element does not exist in the list.\n");
    }
}

void deleteByPos(int Pos)
{
    if(Head -> Next == Head)
    {
        free(Head);
        return ;
    }

    n = Head;
    struct Node *firstNode = Head;
    if(Head != NULL && Pos == 1)
    {
        while(n -> Next != Head)
        {
            n = n -> Next;
        }
        n -> Next = firstNode -> Next;
        Head = n -> Next;
        free(firstNode);
        printf("Element at position %d has been deleted from the list.\n", Pos);
        return ;
    }

    int Count = 1;
    do
     {
        Prev = n;
        n = n -> Next;
        Count++;
     }while(n != Head && Count != Pos);

    if(n == Head)
    {
        printf("Invalid position input.\n");
        return ;
    }
    Prev -> Next = n -> Next;
    printf("Element at position %d has been deleted from the list.\n", Pos);
    free(n);
}

void findElement(int Num)
{
    n = Head;
    do
     {
        if(n -> Data == Num)
        {
            printf("Element is present in the list.\n");
            return ;
        }
        n = n -> Next;
     }while(n != Head);
    printf("Element is not present in the list.\n");
}

void displayList()
{
  n = Head;
  printf("\nThe elements of the list are : ");
  do
   {
    printf("%d ",  n -> Data);
    n = n -> Next;
   }while(n != Head);
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
    createHead(Num);
    Menu();
    return 0;
}
