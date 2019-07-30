# include <stdio.h>

struct Node
{
    int Data;
    struct Node *Next;
}*Head, *Temp, *n;

void insertAtBeg(int Value)
{
    Node *Temp = (struct Node*)malloc(sizeof(struct Node));
    Temp -> Data = Value;
    Temp -> Next = Head;
    Head = Temp;
}

void insertAtEnd(int Value)
{
    Node *Temp = (struct Node*)malloc(sizeof(struct Node));
    Temp -> Data = Value;
    n = Head;
    while(n -> Next != NULL)
    {
        n = n -> Next;
    }
    n -> Next = Temp;
}

void insertAtPos(int Pos, int Value)
{
    Node *Temp = (struct Node*)malloc(sizeof(struct Node));
    Temp -> Data = Value;
    n = Head;
    for(int i = 1 ; i < Pos - 1 ; i++)
    {
        n = n -> Next;
    }
    Temp -> Next = n -> Next;
    n -> Next = Temp;
}

void deleteByData(int Value)
{
    struct Node *Prev = NULL;
    n = Head;
    while(n != NULL && n -> Data != Value)
    {
        Prev = n;
        n = n -> Next;
    }
    if(n == NULL)
    {
        printf("\nNo such element not present in the list.");
        return ;
    }
    Prev -> Next = n -> Next;
    free(n);
}

void deleteByPos(int Pos)
{
    n = Head;
    if(Pos == 1)
    {
        Head = n -> Next;
        free(n);
        return ;
    }

    for(int i = 1 ; n != NULL && i < Pos - 1 ; i++)
    {
        n = n -> Next;
    }

    if(n == NULL || n -> Next == NULL)
    {
        printf("\nPosition exceeds capacity of the linked list.");
        return ;
    }

    Node *delPtr = n -> Next;
    n -> Next = del -> Next;
    free(delPtr);
}

void findElement(int Value)
{
    n = Head;
    while(n != NULL && n -> Data != Value)
    {
        n = n -> Next;
    }
    if(n == NULL)
    {
        printf("\nElement not found in the list.");
        return ;
    }
    printf("\nElement is present in the list.");
}

void displayList()
{
    n = Head;
    printf("\nThe elements of the list are : ");
    while(n != NULL)
    {
        printf("%d " n -> Data);
        n = n -> Next;
    }
}

void Menu()
{
    int Choice = 0;
    while(Choice != 9)
    {
        printf("\nEnter Any One Of The Following Choices:-"
               "\n1. Create a linked list"
               "\n2. Insert at the beginning"
               "\n3. Insert at the end"
               "\n4. Insert at a given position"
               "\n5. Delete by value"
               "\n6. Delete by position"
               "\n7. Check if an element is present"
               "\n8. Display the list"
               "\n9. Exit"
               "\nYour choice is : ")
        scanf("%d", &Choice);
        switch(Choice)
        {
            case 1 : break;

            case 2 : insertAtBeg(Value);
                      break;

            case 3 : insertAtEnd(Value);
                      break;

            case 4 : insertAtPos(Pos, Value);
                      break;

            case 5 : deleteByValue(Value);
                      break;

            case 6 : deleteByPos(Pos, Value);
                      break;

            case 7 : findElement(Value);
                      break;

            case 8 : displayList();
                      break;

            case 9 : break;
        }
    }
}

int main(void)
{
    Menu();
    return 0;
}
