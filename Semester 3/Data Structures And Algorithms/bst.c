# include <stdio.h>
# include <stdlib.h>

struct BSTNode
{
  int Data;
  struct BSTNode *Left, *Right;
};


struct BSTNode *newNode(int x)
{
  struct BSTNode *Temp = (struct BSTNode*)malloc(sizeof(struct BSTNode));
  Temp -> Data = x;
  Temp -> Left -> Right = NULL;
  return Temp;
}

struct BSTNode *insertNode(struct BSTNode *Root, int x)
{
  if(Root == NULL)
   newNode(x);

  if(Root -> Data >= x)
   Root -> Left = insertNode(Root -> Left, x);
  else
   Root -> Right = insertNode(Root -> Right, x);

  return Root;
}

void inorderTraversal(struct BSTNode *Root)
{
  if(Root == NULL)
    return ;

  inorderTraversal(Root -> Left);
  printf("%d ", Root -> Data);
  inorderTraversal(Root -> Right);
}

void preorderTraversal(struct BSTNode *Root)
{
  if(Root == NULL)
    return ;

  printf("%d ", Root -> Data);
  preorderTraversal(Root -> Left);
  preorderTraversal(Root -> Right);
}

void postorderTraversal(struct BSTNode *Root)
{
  if(Root == NULL)
    return;

  postorderTraversal(Root -> Left);
  postorderTraversal(Root-> Right);
  printf(" %d", Root -> Data);
}

void Menu()
{
  int Choice;
  while(Choice != 6)
  {
   printf("\nChoose Any One Of The Following Choices:-"
          "\n1. Insert A Node Into The BST"
          "\n2. Search For A Node In The BST"
          "\n3. Inorder Traversal Of BST"
          "\n4. Preorder Traversal Of BST"
          "\n5. Postorder Traversal Of BST"
          "\n6. Exit"
          "\nYour choice is : ");
   scanf("%d", &Choice);
  }
}

int main(void)
{
  struct BSTNode *Root = NULL;
  Root = insertNode(Root, 50);
  Root = insertNode(Root, 40);
  Root = insertNode(Root, 60);
  Root = insertNode(Root, 30);
  Root = insertNode(Root, 45);
  Root = insertNode(Root, 70);
  Root = insertNode(Root, 55);
  printf("%d", searchElement(Root, 30));
  printf("\nInorder Traversal : ");
  inorderTraversal(Root)
  printf("\nPreorder Traversal : ");
  preorderTraversal(Root);
  printf("\nPostorder Traversal : ");
  postorderTraversal(Root);
  return 0;
}

int searchElement(struct BSTNode *Root, int x)
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

