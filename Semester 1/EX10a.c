# include <stdio.h>
# include <stdlib.h>
void main()
{
  FILE *fptr;
  char Ch;
  fptr=fopen("writeFile1.txt", "w");
   if(fptr==NULL)
    {
      printf("\nFile Does Not Exist.");
      exit(0);
    }
   do
    {
     Ch=getchar();
     fputc(Ch, fptr);
   }while(Ch!='\n');
  fclose(fptr);
}
