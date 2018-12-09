# include <stdio.h>
# include <stdlib.h>
void main()
{
 FILE *fptr1;
 fptr1=fopen("readFile.txt", "r");
  if(fptr1==NULL)
   {
    printf("\nFile Does Not Exist.");
    exit(0);
   }
 int Lines=0, Count=0;
 char Ch;
  while(!(feof(fptr1)))
   {
    Ch=fgetc(fptr1);
     if(feof(fptr1))
      break;
     if(Ch=='\n')
      Lines++;
    Count++;
   }
 fclose(fptr1);
 printf("\nThe Number Of Characters In The File Is...%d", Count);
 printf("\nThe Number Of Lines In The File Is...%d\n", Lines);
}
