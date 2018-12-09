# include <stdio.h>
void main()
{
 FILE *fptr1;
 fptr1=fopen("readFile.txt", "r");
 int Lines=0, Count=0;
 char Ch;
  while(!(feof(fptr1)))
   {
     Ch=fgetc(fptr1);
      if(Ch=='\n')
       Lines++;
     Count++;
   }
 printf("\nThe Number Of Characters In The File Is...%d", Count);
 printf("\nThe Number Of Lines In The File Is...%d\n", Lines);
}
