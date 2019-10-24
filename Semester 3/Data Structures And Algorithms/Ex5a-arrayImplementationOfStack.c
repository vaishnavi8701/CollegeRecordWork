# include <stdio.h>
# define SIZE 5

int Stack[SIZE];
int Top = -1;

void pushData(int x)
{
    if(Top == SIZE - 1)
    {
        printf("Stack is full. Push operation is not possible.\n");
        return ;
    }
    Top++;
    Stack[Top] = x;
    printf("%d has been pushed into the stack.\n", Stack[Top]);
}

void popData()
{
    if(Top == -1)
    {
        printf("\nStack is empty. No elements to pop.\n");
        return ;
    }
    printf("\n%d has been popped.\n", Stack[Top]);
    Top--;
}

void peek()
{
    if(Top == -1)
    {
        printf("\nStack is empty. No element is present at the top.\n");
        return ;
    }
    printf("\n%d is at the top of the stack.\n", Stack[Top]);
}

void displayStack()
{
    if(Top == -1)
    {
        printf("\nStack is empty. No elements to display.\n");
        return ;
    }
    printf("\nThe elements of the stack are : ");
    for(int i = Top ; i >= 0 ; i--)
    {
        printf("%d ", Stack[i]);
    }
    printf("\n");
}

void Menu()
{
    int Choice;
    while(Choice != 5)
    {
        printf("\nChoose any one of the following choices:-"
               "\n1. Push data into the stack"
               "\n2. Pop data from the stack"
               "\n3. Peek into the stack"
               "\n4. Display the elements of the stack"
               "\n5. Exit"
               "\nYour choice is : ");
        scanf("%d", &Choice);
        switch(Choice)
        {
            case 1 : {
                      int Data;
                      printf("\nEnter the element to be pushed : ");
                      scanf("%d", &Data);
                      pushData(Data);
                       break;
                     }

            case 2 : popData();
                      break;

            case 3 : peek();
                      break;

            case 4 : displayStack();
                      break;

            case 5 : break;

            default : printf("\nInvalid choice.\n");
        }
    }
}

int main(void)
{
    Menu();
    return 0;
}
