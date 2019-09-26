# include <stdio.h>
# include <stdlib.h>

struct Node
{
    int Data;
    struct Node *Left, *Right;
};

struct Node *newNode(int x)
{
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> Data = x;
    newNode -> Left -> Right = NULL;
    return newNode;
}

struct Node *insertNewNode(struct Node *Root, int x)
{
    if(Root == NULL)
      return newNode(x);

    if(Root -> Data >= x)
      Root -> Left = insertNewNode(Root -> Left, x);
    else
      Root -> Right = insertNewNode(Root -> Right, x);

    return Root;
}

int searchElement(struct Node *Root, int x)
{
  if(Root == NULL)
   return 0;
  else if(Root -> Data == x)
   return 1;
  else if(Root -> Data > x)
   searchElement(Root -> Left, x);
  else
   searchElement(Root -> Right, x);
}

void inorderTraversal(struct Node *Root)
{
  if(Root == NULL)
    return ;

  inorderTraversal(Root -> Left);
  printf("%d ", Root -> Data);
  inorderTraversal(Root -> Right);
}

void preorderTraversal(struct Node *Root)
{
  if(Root == NULL)
    return ;

  printf("%d ", Root -> Data);
  preorderTraversal(Root -> Left);
  preorderTraversal(Root -> Right);
}

void postorderTraversal(struct Node *Root)
{
  if(Root == NULL)
    return;

  postorderTraversal(Root -> Left);
  postorderTraversal(Root-> Right);
  printf(" %d", Root -> Data);
}

void Menu()
{
    int Choice = 0, x;
    struct Node* Root = NULL;
    while(Choice != 6)
    {
        printf("\nEnter Any One Of The Following Choices:-"
               "\n1. Insert A Node Into The BST"
               "\n2. Search For A Element In The BST"
               "\n3. Inorder Traversal"
               "\n4. Preorder Traversal"
               "\n5. Postorder Traversal"
               "\nYour choice is : ");
        scanf("%d", &Choice);
        switch(Choice)
        {
            case 1 : printf("\nEnter the element to be inserted : ");
                     scanf("%d", &x);
                     Root = insertNewNode(Root, x);
                      break;

            case 2 : printf("\nEnter the element to be searched : ");
                     scanf("%d", &x);
                     printf("%d", searchElement(Root, x));
                      break;

            case 3 : inorderTraversal(Root);
                      break;

            case 4 : preorderTraversal(Root);
                      break;

            case 5 : postorderTraversal(Root);
                      break;

            case 6 : break;

            default : printf("\nInvalid Choice.\n");
        }
    }
}

int main(void)
{
    Menu();
    return 0;
}
