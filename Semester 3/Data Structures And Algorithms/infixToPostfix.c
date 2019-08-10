# include <stdio.h>
# include <string.h>
# define SIZE 10

int Top = -1;
int Stack[SIZE];

int empty()
{
  return Top == -1;
}

void push(char x)
{
    Top++;
    Stack[Top] = x;
}

void pop()
{
  Top--;
}

char top()
{
  return Stack[Top];
}

int isOperand(char c)
{
    if(c >= '0' && c <= '9')
      return 1;
    else if(c >= 'a' && c <='z')
      return 1;
    else if(c >= 'A' && c <= 'Z')
      return 1;
    return 0;
}

int isOperator(char c)
{
    if(c == '+' || c == '-' || c == '*' || c =='/')
      return 1;
    return 0;
}

int getOperatorWeight(char Op)
{
    switch(Op)
    {
        case '+' :
        case '-' : return 1;

        case '*' :
        case '/' : return 2;

        case '^' : return 3;
    }
}

int hasHigherPrecedence(char op1, char op2)
{
    int op1Weight = getOperatorWeight(op1);
    int op2Weight = getOperatorWeight(op2);
    return op1Weight >= op2Weight ? 1 : 0;
}

void appendToStr(char Str[], char c)
{
    int Len = strlen(Str);
    Str[Len] = c;
    Str[Len + 1] = '\0';
}

void infixToPostfix(char Exp[])
{
    char Postfix[10] = "";
    for(int i = 0 ; Exp[i] != '\0' ; i++)
    {
        if(Exp[i] == ' ' && Exp[i] == ',')
        {
            continue;
        }

        else if(Exp[i] == '(')
        {
            push(Exp[i]);
        }

        else if(isOperand(Exp[i]))
        {
            appendToStr(Postfix, Exp[i]);
        }

        else if(isOperator(Exp[i]))
        {
            while(!empty() && top() != '(' && hasHigherPrecedence(top(), Exp[i]))
            {
                appendToStr(Postfix, top());
                pop();
            }
            push(Exp[i]);
        }

        else if(Exp[i] == ')')
        {
            while(!empty() && top() != '(')
            {
                appendToStr(Postfix, top());
                pop();
            }
            pop();
        }
    }

    while(!empty())
    {
        appendToStr(Postfix, top());
        pop();
    }
    printf("The resultant postfix expression is : %s", Postfix);
}

//Driver function
int main(void)
{
    char infixExpression[10];
    printf("\nEnter an infix expression : ");
    gets(infixExpression);
    infixToPostfix(infixExpression);
    return 0;
}
