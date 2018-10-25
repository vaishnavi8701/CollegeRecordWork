# include <stdio.h>
void main()
{
  char* Str;
  int Vowel=0;
  printf("\nEnter A String...");
  scanf("%s", Str);
   for(int i=0;Str[i]!='\0';i++)
   {
       if(Str[i]=='a' || Str[i]=='A' || Str[i]=='e' || Str[i]=='E' ||
          Str[i]=='i' || Str[i]=='I' || Str[i]=='o' || Str[i]=='O' ||
          Str[i]=='u' || Str[i]=='U')
         Vowel++;
   }
   printf("\nThe Number Of Vowels Present In The String Is...%d", Vowel);
}
