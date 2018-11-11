# include <stdio.h>
# include <string.h>
void main()
{
 char Str[100];
 printf("\nEnter A String...");
 scanf("%s", &Str);
 int i, j, Count=0;
 printf("\n");
  for(i=0;Str[i]!='\0';i++)
   {
    for(j=0;j<=i;j++)
     printf("%c ", Str[j]);
    printf("\n");
   }
  for(;i>=0;i--)
   {
     for(j=0;j<i;j++)
      printf("%c ", Str[j]);
    printf("\n");
   }
}
