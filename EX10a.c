# include <stdio.h>
# include <stdlib.h>
void main()
{
 FILE *fptr1, *fptr2;
 char Ch;
 fptr1=fopen("readFile.txt", "r");
  if(fptr1==NULL)
   {
    printf("\nFile Does Not Exist.");
    exit(0);
   }
 fptr2=fopen("writeFile1.txt", "w");
  while(!(feof(fptr1)))
   {
    Ch=fgetc(fptr1);
     if(feof(fptr1))
      break;
    fputc(Ch, fptr2);
   }
 fclose(fptr1);
 fclose(fptr2);
}
