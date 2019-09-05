# include <stdio.h>
# define SIZE 3

int Queue[SIZE];
int Front = 0, Rear = 0;

void enqueueElement(int Val)
{
  if(Rear == SIZE)
  {
     printf("Queue is full. Enqueue not possible\n");
     return ;
  }

  Queue[Rear] = Val;
  Rear++;
  printf("%d has been enqueued.\n", Val);
}

void dequeueElement()
{
  if(Front == Rear)
  {
     printf("\nQueue is Empty. Dequeue operation cannot be performed.\n");
     return ;
  }

  Rear--;
  printf("\n%d has been dequeued.\n", Queue[Rear]);
}

void displayQueue()
{
  if(Front == Rear)
  {
     printf("\nQueue is empty. No elements to display.\n");
     return ;
  }

  int i;
  printf("\nThe elements of the queue are : ");
  for(i = Front ; i < Rear ; i++)
    printf("%d ", Queue[i]);
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
