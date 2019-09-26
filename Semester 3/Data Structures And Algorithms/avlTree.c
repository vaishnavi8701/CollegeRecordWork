# include <stdio.h>
# include <stdlib.h>

struct Node
{
    int Data;
    Node *Left, *Right;
    int Height;
};

int heightOfTree(Node *n)
{
    if(n == NULL)
      return 0;
    return n -> Height;
}

int balanceFactor(Node *n)
{
    int leftHeight, rightHeight;
    if(n == NULL)
      return 0;

    leftHeight = heightOfTree(n -> Left);
    rightHeight = heightOfTree(n -> Right);
    return leftHeight - rightHeight;
}

Node *rotateLeft(Node *x)
{
  Node *y = x -> Right;
  x -> Right = y -> Left;
  y -> Left = x;
  x -> Height = heightOfTree(x);
  y -> Height = heightOfTree(y);
  return y;
}

Node *rotateRight(Node *x)
{
    Node *y;
    y = x -> Left;
    x -> Left = y -> Right;
    y -> Right = x;
    x -> Height = heightOfTree(x);
    y -> Height = heightOfTree(y);
    return y;
}

Node *newNode(int Key)
{
    Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> Data = Key;
    newNode -> Left = NULL;
    newNode -> Right = NULL;
    newNode -> Height = 1; //This node is initially a leaf node.
    return newNode;
}

struct Node *insertNode(Node* Root, int Key)
{
    if(Root == NULL)
      return newNode(Key);

    if(Key < Root -> Data)
    {
      Root -> Left = insertNode(Root -> Left, Key);
      if(balanceFactor(Root) == 2)
      {
          if(Key < Root -> Left -> Key)
            return leftRotate(Root);
          else
          {
              Root -> Left = leftRotate(Root -> Left);
              return rightRotate(Root);
          }
      }
    }

    else if(Key > Root -> Data)
    {
      Root -> Right = insertNode(Root -> Right, Key);
      if(balanceFactor(Root) == -2)
      {
          if(Key > Root -> Right -> Data)
            Root = rightRotate(Root);
          else
          {
              Root -> Right = rightRotate(Root -> Right);
              return leftRotate(Root);
          }
      }
}

void Menu()
{
    int Choice = 0;
    while(Choice != 6)
    {
        printf("\nChoose Any One Of The Following Choices:-"
               "\n1. Insert A Node Into The Tree"
               "\n2. Delete A Node From The Tree"
               "\n3. Print Preorder Traversal"
               "\n4. Print Postorder Traversal"
               "\n5. Print Inorder Traversal"
               "\n6. Exit"
               "\nYour Choice is : ");
        scanf("%d", &Choice);
        switch(Choice)
        {
            case 1 : insertNode(Root, Data);
                      break;

            case 2 : deleteNode(Root, Data);
                      break;

            case 3 : preOrder(Root);
                      break;

            case 4 : postOrder(Root);
                      break;

            case 5 : inOrder(Root);
                      break;

            case 6 : break;

            default : printf("\nInvalid Choice.");
        }
    }
}

int main(void)
{
    Menu();
    return 0;
}
