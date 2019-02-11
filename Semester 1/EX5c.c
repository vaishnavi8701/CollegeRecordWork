# include <stdio.h>
# include <string.h>
void main()
{
 char str[100];
 printf("\nEnter A String...");
 scanf("%s", str);
 int i, j, Count=0;
 printf("\n");
  for(i=0;str[i]!='\0';i++)
   {
    for(j=0;j<=i;j++)
     printf("%c ", str[j]);
    printf("\n");
   }
  for(;i>=0;i--)
   {
     for(j=0;j<i;j++)
      printf("%c ", str[j]);
    printf("\n");
   }
}
