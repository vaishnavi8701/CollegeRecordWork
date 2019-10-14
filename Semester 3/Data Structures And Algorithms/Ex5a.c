# include <stdio.h>
# define SIZE 10

int Stack[SIZE];
int Top = -1;

int isEmpty()
{
  return Top == -1;
}

int isFull()
{
  return Top == SIZE - 1;
}

void pushData(char x)
{
    Top++;
    Stack[Top] = x;
}

void popData()
{
  Top--;
}

char Peek()
{
  return Stack[Top];
}

int arePair(char Opening, char Closing)
{
  if(Opening == '(' && Closing == ')')
   return 1;
  else if(Opening == '{' && Closing == '}')
   return 1;
  else if(Opening == '[' && Closing == ']')
   return 1;
  return 0;
}

void balancedParantheses(char Str[])
{
  int i;
  for(i = 0 ; Str[i] !='\0' ; i++)
  {
    if(Str[i] == '(' || Str[i] == '{' || Str[i] == '[')
    {
      pushData(Str[i]);
    }
    else if(Str[i] == ')' || Str[i] == '}' || Str[i] ==']')
    {
      if(isEmpty() || !arePair(Peek(), Str[i]))
      {
        printf("Not balanced parantheses\n.");
        return ;
      }
      popData(Str[i]);
    }
    else
    {
      continue;
    }
  }
  if(!isEmpty())
  {
    printf("Not Balanced parantheses.\n");
    return ;
  }
  printf("Balanced parantheses.\n");
}

int main(void)
{
  char Exp[100];
  printf("\nEnter the expression : ");
  gets(Exp);
  balancedParantheses(Exp);
  return 0;
}
