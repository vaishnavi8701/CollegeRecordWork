# include <stdio.h>
# define SIZE 3

int Queue[SIZE];
int Front = -1, Rear = -1;

void Q_Insert(int x)
{
    if((Front == 0 && Rear == SIZE - 1) || (Rear + 1 == Front))
    {
        printf("Insertion not possible. Queue is full.\n");
        return ;
    }

    if(Front == -1 && Rear == -1)
    {
        Front = Rear = 0;
    }
    else if(Front > 0 && Rear == SIZE - 1)
    {
        Rear = 0;
    }
    else
    {
        Rear++;
    }
    Queue[Rear] = x;
    printf("%d has been enqueued.\n", x);
}

void Q_Delete()
{
    if(Front == -1) //Check if the queue is initially empty.
    {
        printf("\nDeletion not possible. Queue is empty.\n");
        return ;
    }

    printf("\n%d has been dequeued\n", Queue[Front]);
    if(Front == Rear)
    {
        Front = Rear = -1;
    }
    else if(Front == SIZE - 1)
    {
        Front = 0;
    }
    else
    {
        Front++;
    }
}

void Q_Display()
{
    if(Front == -1)
    {
        printf("\nNo elements to Display. Queue is empty.\n");
        return ;
    }

    printf("\nThe elements of the queue are : ");

    if(Rear >= Front)
    {
        for(int i = Front ; i < SIZE ; i++)
        {
            printf("%d ", Queue[i]);
        }
    }

    else
    {
        for(int i = Front ; i < SIZE ; i++)
        {
            printf("%d ", Queue[i]);
        }
        for(int i = 0 ; i <= Rear ; i++)
        {
            printf("%d ", Queue[i]);
        }
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
                     int x;
                     printf("\nEnter the element to be enqueued : ");
                     scanf("%d", &x);
                     Q_Insert(x);
                      break;
                     }

          case 2 : Q_Delete();
                    break;

          case 3 : Q_Display();
                    break;

          case 4 : break;

          default : printf("\nInvalid Choice.\n");
        }
    }
}

int main(void)
{
    Menu();
    return 0;
}
