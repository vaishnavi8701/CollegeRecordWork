# include <stdio.h>
# include <stdlib.h>

typedef struct harish
{
  int Data;
  struct Node *Left, *Right;
  int Height;
}Node;

int heightOfTree(Node *Root)
{
  int leftHeight, rightHeight;
  if(Root == NULL)
    return 0;

  if(Root -> Left == NULL)
    leftHeight = 0;
  else
    leftHeight = 1 + Root -> Left -> Height;

  if(Root->Right == NULL)
    rightHeight = 0;
  else
    rightHeight = 1 + Root -> Right -> Height;

  return (leftHeight > rightHeight) ? leftHeight : rightHeight;

}

Node *rotateLeft(Node *Root)
{
  Node *Temp;
  Temp = Root -> Right;
  Root -> Right = Temp -> Left;
  Temp -> Left = Root;
  Root -> Height = heightOfTree(Root);
  Temp -> Height = heightOfTree(Temp);
  return Temp;
}

Node *rotateRight(Node *Root)
{
  Node *Temp;
  Temp = Root -> Left;
  Root -> Left = Temp -> Right;
  Temp -> Right = Root;
  Root -> Height = heightOfTree(Root);
  Temp -> Height = heightOfTree(Temp);
  return Temp;
}

Node *LR(Node *Root)
{
  Root -> Left = rotateLeft(Root -> Left);
  Root = rotateRight(Root);
  return Root;
}

Node *RL(Node *Root)
{
  Root -> Right = rotateRight(Root -> Right);
  Root = rotateLeft(Root);
  return Root;
}

int balanceFactor(Node *Root)
{
  int leftHeight,rightHeight;
  if(Root==NULL)
    return 0;

  if(Root -> Left == NULL)
    leftHeight = 0;
  else
    leftHeight = 1 + Root -> Left -> Height;

  if(Root -> Right == NULL)
    rightHeight = 0;
  else
    rightHeight = 1 + Root -> Right -> Height;

  return(leftHeight-rightHeight);
}

Node* insertNode(Node *Root, int x)
{
  if(Root == NULL)
  {
    Root = (Node*)malloc(sizeof(Node));
    Root -> Data = x;
    Root -> Left = NULL;
    Root -> Right = NULL;
  }

  else if(x < Root -> Data)
  {
    Root -> Left = insertNode(Root -> Left, x);

    if(balanceFactor(Root) == 2)
    {
      if(x < Root -> Left -> Data)
        Root = rotateLeft(Root);
      else
        Root = LR(Root);
    }
  }

  else
  {
    Root -> Right = insertNode(Root -> Right, x);

    if(balanceFactor(Root) == -2)
    {
      if(x > Root -> Right -> Data)
        Root = rotateLeft(Root);
      else
        Root = RL(Root);
    }
  }

  Root -> Height = heightOfTree(Root);
  return Root;
}

Node *deleteNode(Node *Root, int x)
{
  Node *p;
  if(Root == NULL)
  {
    return NULL;
  }

  else if(x < Root -> Data)
  {
    Root -> Left = deleteNode(Root -> Left, x);

    if(balanceFactor(Root) == -2)
    {
      if(balanceFactor(Root -> Right) <= 0)
        Root = rotateLeft(Root);
      else
        Root = RL(Root);
    }
  }

  else if(x > Root -> Data)
  {
    Root -> Right = deleteNode(Root -> Right, x);

    if(balanceFactor(Root) == 2)
    {
      if(balanceFactor(Root -> Left) >= 0)
        Root = rotateRight(Root);
      else
        Root = LR(Root);
    }
  }

  else
  {
    if(Root -> Right != NULL)
    {
      p = Root -> Right;
      while(p -> Left != NULL)
        p = p -> Left;
      Root -> Data = p -> Data;
      Root -> Right= deleteNode(Root -> Right, p -> Data);

      if(balanceFactor(Root) == 2)
      {
        if(balanceFactor(Root -> Left)>=0)
          Root = rotateRight(Root);
        else
          Root = LR(Root);
      }
    }
    else
      return Root -> Left;
  }

  Root -> Height = heightOfTree(Root);
  return Root;
}

void preorderTraversal(Node *Root)
{
  if(Root == NULL)
    return ;

  printf("%d ", Root -> Data);
  preorderTraversal(Root -> Left);
  preorderTraversal(Root -> Right);
}

void inorderTraversal(Node *Root)
{
  if(Root == NULL)
    return ;

  inorderTraversal(Root -> Left);
  printf("%d ", Root -> Data);
  inorderTraversal(Root -> Right);
}

void postorderTraversal(Node *Root)
{
  if(Root == NULL)
    return ;

  postorderTraversal(Root -> Left);
  postorderTraversal(Root -> Right);
  printf("%d ", Root -> Data);
}

void Menu()
{
  Node *Root=NULL;
  int Choice, x;
  printf("\nEnter element to be inserted as root node : ");
  scanf("%d", &x);
  Root = insertNode(Root, x);

  while(Choice != 6)
  {
    printf("\nChoose any one of the following choices:-"
           "\n1. Insert A Node"
           "\n2. Delete A Node"
           "\n3. Preorder Traversal"
           "\n4. Inorder Traversal"
           "\n5. Postorder Traversal"
           "\n6. Exit"
           "\nYour choice is : ");
    scanf("%d", &Choice);

    switch(Choice)
    {
      case 1 : {
                int Num;
                printf("\nEnter element for insertion : ");
                scanf("%d", &Num);
                Root = insertNode(Root, Num);
                printf("%d has been has inserted into the tree.\n", Num);
                 break;
               }

      case 2 : {
                int Num;
                printf("\nEnter element for deletion : ");
                scanf("%d", &Num);
                Root = deleteNode(Root, Num);
                printf("%d has been deleted from the tree.\n", Num);
                 break;
               }

      case 3 : printf("\nPreorder traversal : ");
               preorderTraversal(Root);
               printf("\n");
                break;

      case 4 : printf("\nInorder traversal : ");
               inorderTraversal(Root);
               printf("\n");
                break;

      case 5 : printf("\nPostorder traversal : ");
               postorderTraversal(Root);
               printf("\n");
                break;

      case 6 : break;

      default : printf("\nInvalid choice.\n");
    }
  }
}

int main()
{
  Menu();
  return 0;
}
