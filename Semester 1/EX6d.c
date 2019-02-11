# include <stdio.h>
# include <string.h>
void stringReverse(char *Str, char *Rev);
void main()
{
 char String[20], revString[20];
 printf("\nEnter A String...");
 gets(String);
 stringReverse(String, revString);
 printf("The Reverse Of The Entered String Is...%s\n", revString);
}
void stringReverse(char *Str, char *Rev)
{
 int i, j, Len=strlen(Str);
  for(i=Len-1, j=0 ;i>=0; i--, j++)
   Rev[j]=Str[i];
 Rev[j]='\0';
}
