# include <stdio.h>
# include <string.h>
void main()
{
  char *Str;
  int i, Vowel=0;
  printf("\nEnter A String...");
  scanf("%s", Str);
  int n=strlen(Str);
   for(i=0;i<n;i++)
   {
       if(Str[i]=='a' || Str[i]=='A' || Str[i]=='e' || Str[i]=='E' ||
          Str[i]=='i' || Str[i]=='I' || Str[i]=='o' || Str[i]=='O' ||
          Str[i]=='u' || Str[i]=='U')
         Vowel++;
   }
   printf("\nThe Number Of Vowels Present In The String Is...%d", Vowel);
}
