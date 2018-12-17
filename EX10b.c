# include <stdio.h>
# include <stdlib.h>
void main()
{
 char fileName1[10], fileName2[10], Str[100];
 FILE *fptr1, *fptr2;
 printf("\nEnter The First Filename...");
 scanf("%s", fileName1);
 fptr1=fopen(fileName1, "r");
  if(fptr1==NULL)
   {
     printf("\nFile Does Not Exist.");
     exit(0);
   }
 printf("Enter The Second Filename...");
 scanf("%s", fileName2);
 fptr2=fopen(fileName2, "w");
  while(!(feof(fptr1)))
   {
    fgets(Str, 100, fptr1);
    fputs(Str, fptr2);
     if(feof(fptr1))
      break;
   }
 fclose(fptr1);
 fclose(fptr2);
}
