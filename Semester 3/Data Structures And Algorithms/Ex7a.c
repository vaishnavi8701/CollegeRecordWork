# include <stdio.h>
# include <stdlib.h>

struct BstNode
{
    int Data;
    struct BstNode *Left, *Right;
};


struct BstNode* newNode(int Data)
{
    struct BstNode *newNode = (struct BstNode*)malloc(sizeof(struct BstNode)); //Memory allocation for new node.
    newNode -> Data = Data;
    newNode -> Left = newNode -> Right = NULL;
    return newNode;
}

struct BstNode* insertNewNode(struct BstNode* Root, int Data)
{
    if(Root == NULL) //If the tree or subtree has no elements
      return newNode(Data);

    if(Root -> Data >= Data) //If data stored in the root node is greater than the data to be inserted, make sure to insert the new node in the left subtree.
    {
        Root -> Left = insertNewNode(Root -> Left, Data);
    }
    else //Else, just insert it into the right subtree.
    {
        Root -> Right = insertNewNode(Root -> Right, Data);
    }
    return Root; //Return address of the root node every time a new node is inserted in the tree..
}

int searchElement(struct BstNode* Root, int Data)
{
    if(Root == NULL)
      return 0;

    else if(Root -> Data == Data)
      return 1;

    else if(Root -> Data >= Data) //If data stored in root node is greater than the data to be searched, then continue to search in the left subtree.
      return searchElement(Root -> Left, Data);

    else //Else, search in the right subtree.
      return searchElement(Root -> Right, Data);
}

void inorderTraversal(struct BstNode* Root)
{
    if(Root == NULL)
      return ;

    inorderTraversal(Root -> Left);
    printf("%d ", Root -> Data);
    inorderTraversal(Root -> Right);
}

void preorderTraversal(struct BstNode *Root)
{
  if(Root == NULL)
    return ;

  printf("%d ", Root -> Data);
  preorderTraversal(Root -> Left);
  preorderTraversal(Root -> Right);
}

void postorderTraversal(struct BstNode *Root)
{
  if(Root == NULL)
    return;

  postorderTraversal(Root -> Left);
  postorderTraversal(Root-> Right);
  printf("%d ", Root -> Data);
}

void Menu()
{
  struct BstNode *Root = NULL;
  int Num;
  printf("\nEnter data to be inserted at root Node : ");
  scanf("%d", &Num);
  Root = insertNewNode(Root, Num);
  int Choice = 0, x;
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
   switch(Choice)
   {
      case 1 : printf("\nEnter the element to be inserted into the BST : ");
               scanf("%d", &x);
               Root = insertNewNode(Root, x);
                break;

      case 2 : printf("\nEnter the element to be searched : ");
               scanf("%d", &x);
               if(searchElement(Root, x) == 1)
                  printf("Element present in the BST.\n");
               else
                  printf("Element not present in the BST.\n");
                break;

      case 3 : printf("\nInorder Traversal of the BST : ");
               inorderTraversal(Root);
               printf("\n");
                break;

      case 4 : printf("\nPreorder Traversal of the BST : ");
               preorderTraversal(Root);
               printf("\n");
                break;

      case 5 : printf("\nPostorder Traversal of the BST : ");
               postorderTraversal(Root);
               printf("\n");
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
