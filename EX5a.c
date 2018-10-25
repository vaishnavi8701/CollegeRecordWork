# include <stdio.h>
# include <string.h>
# include <stdlib.h>
void main()
{
 char s[100];
 int Choice;
  while(Choice!=4)
   {
     printf("\nEnter Any One Of The Following Choices:-");
     printf("\n1. Read A String");
     printf("\n2. Display The Length Of The String");
     printf("\n3. Display The String");
     printf("\n4. Exit");
     printf("\nYour Choice Is...");
     scanf("%d", &Choice);
      switch(Choice)
       {
         case 1:printf("\n\nEnter A String...");
                scanf("%s", s); 
                int Flag=1;
                 break;
        case 2:if(Flag==1)
                printf("\nThe Length Of The String Is...%d\n", strlen(s));
               else
                 printf("\nPlease Enter The String First\n");
               break;
        case 3:if(Flag==1)
                printf("\nThe String Is...%s\n", s);
               else
                 printf("\nPlease Enter The String First.\n");
               break;
        case 4:exit(0);
                break;
        default:printf("\nInvalid Choice.\n");
       }
   }
}
