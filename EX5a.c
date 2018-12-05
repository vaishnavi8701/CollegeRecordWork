# include <stdio.h>
# include <string.h>
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
     printf("\n4. Terminate The Program");
     printf("\nYour Choice Is...");
     scanf("%d", &Choice);
      switch(Choice)
       {
         case 1:printf("\n\nEnter A String...");
                scanf("%s", s);
                int Flag=1;
                 break;
         case 2:if(Flag==1)
                {
                 int Count=0, i;
                  for(i=0;s[i]!='\0';i++)
                   Count++;
                 printf("\nThe Length Of The String Is...%d\n", Count);
                }
               else
                printf("\nPlease Enter The String First.\n");
               break;
         case 3:if(Flag==1)
                printf("\nThe String Is...%s\n", s);
               else
                 printf("\nPlease Enter The String First.\n");
               break;
         case 4:printf("\nThank You For Using The Program.\n");
                break;
         default:printf("\nInvalid Choice.\n");
       }
   }
}
