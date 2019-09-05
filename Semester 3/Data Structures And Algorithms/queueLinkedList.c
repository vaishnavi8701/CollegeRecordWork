# include <stdio.h>
# include <stdlib.h>

struct Node
{
    int Data;
    struct Node *Next;
}*Temp;

struct Node *Front = NULL, *Rear = NULL;

void enqueueElement(int Val)
{
    Temp = (struct Node*)malloc(sizeof(struct Node));
    Temp -> Data = Val;

    if(Front == NULL && Rear == NULL)
    {
        Front = Rear = Temp;
    }
    else
    {
        Rear -> Next = Temp;
        Rear = Temp;
    }
    Temp -> Next = NULL;
    printf("%d has been enqueued.\n", Val);
}

void dequeueElement()
{
    if(Front == NULL)
    {
        printf("\nQueue is Empty. Dequeue operation cannot be performed.\n");
        return ;
    }

    if(Front == Rear)
    {
        printf("\n%d has been dequeued.\n", Front -> Data);
        Front = Rear = NULL;
    }
    else
    {
        Temp = Front;
        printf("\n%d has been dequeued.\n", Front -> Data);
        Front = Front -> Next;
        free(Temp);
    }
}

void displayQueue()
{
    if(Front == NULL)
    {
        printf("\nQueue is Empty. No elements to display.\n");
        return ;
    }

    Temp = Front;
    printf("\nThe elements of the queue are : ");
    while(Temp != NULL)
    {
        printf("%d ", Temp -> Data);
        Temp = Temp -> Next;
    }
    printf("\n");
}

void Menu()
{
  int Choice = 0;
  while(Choice != 4)
  {
    printf("\nEnter Any One Of The Following Choices:-"
           "\n1. Enqueue A Element"
           "\n2. Dequeue A Element"
           "\n3. Display The Queue"
           "\n4. Exit"
           "\nYour choice is : ");
    scanf("%d", &Choice);
    switch(Choice)
    {
        case 1 : {
                  int Data;
                  printf("\nEnter the element : ");
                  scanf("%d", &Data);
                  enqueueElement(Data);
                   break;
                 }

        case 2 : dequeueElement();
                  break;

        case 3 : displayQueue();
                  break;

        case 4 :  break;

        default : printf("\nInvalid Choice.\n");
    }
  }
}

int main(void)
{
    Menu();
    return 0;
}
