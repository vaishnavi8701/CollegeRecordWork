# include <stdio.h>
# include <stdlib.h>

struct Node
{
    int Data;
    struct Node *Next;
}*Head, *Temp, *Prev, *n;

void createList(int Value)
{
    Head = (struct Node*)malloc(sizeof(struct Node));
    Head -> Data = Value;
    printf("%d has been inserted as head node.\n", Value);
}

void insertAtBeg(int Value)
{
    Temp = (struct Node*)malloc(sizeof(struct Node));
    Temp -> Data = Value;
    Temp -> Next = Head;
    Head = Temp;
    printf("%d has been inserted into the list.\n", Value);
}

void insertAtEnd(int Value)
{
    Temp = (struct Node*)malloc(sizeof(struct Node));
    Temp -> Data = Value;
    n = Head;
    while(n -> Next != NULL)
    {
        n = n -> Next;
    }
    n -> Next = Temp;
    printf("%d has been inserted into the list.\n", Value);
}

void insertAtPos(int Pos, int Value)
{
    Temp = (struct Node*)malloc(sizeof(struct Node));
    Temp -> Data = Value;
    n = Head;
    int i;
    for(i = 1 ; i < Pos - 1 ; i++)
    {
        n = n -> Next;
    }
    Temp -> Next = n -> Next;
    n -> Next = Temp;
    printf("%d has been inserted into the list.\n", Value);
}

void deleteByValue(int Value)
{
    Prev = NULL;
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
    printf("%d has been deleted from the list.\n", Value);
    free(n);
}

void deleteByPos(int Pos)
{
    n = Head;
    if(Pos == 1)
    {
        Head = n -> Next;
        printf("Element at position %d has been deleted from the list.\n");
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

void findElement(int Value)
{
    n = Head;
    while(n != NULL && n -> Data != Value)
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
    int Choice = 0;
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
        int Pos, Value;
        switch(Choice)
        {
            case 1 : printf("\nEnter value for insertion : ");
                     scanf("%d", &Value);
                     insertAtBeg(Value);
                      break;

            case 2 : printf("\nEnter value for insertion : ");
                     scanf("%d", &Value);
                     insertAtEnd(Value);
                      break;

            case 3 : printf("\nEnter value and position for insertion : ");
                     scanf("%d %d", &Value, &Pos);
                     insertAtPos(Pos, Value);
                      break;

            case 4 : printf("\nEnter value for deletion : ");
                     scanf("%d", &Value);
                     deleteByValue(Value);
                      break;

            case 5 : printf("\nEnter position for deletion : ");
                     scanf("%d", &Pos);
                     deleteByPos(Pos);
                      break;

            case 6 : printf("\nEnter value for search operation : ");
                     scanf("%d", &Value);
                     findElement(Value);
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
