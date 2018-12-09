# include <stdio.h>
void main()
{
 FILE *fptr1;
 fptr1=fopen("readFile.txt", "r");
 int Lines=0, Ch=0;
  while(!(feof(fptr1)))
   {
     fgetc(fptr1);
     Ch++;
   }
 printf("\nThe Number Of Characters In The File Is...%d", Ch);   
}
