# include <stdio.h>
# include <string.h>
void main()
{
 char str[]="hello";
 int i, j;
  for(i=0;i<strlen(str);i++)
   {
    for(j=0;j<=i;j++)
     printf("%c ", str[j]);
    printf("\n");
   }
  for(i=strlen(str);i>=0;i--)
   {
     for(j=0;j<i;j++)
      printf("%c ", str[j]);
    printf("\n");
   }
}
