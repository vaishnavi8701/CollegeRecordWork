# include <stdio.h>
 struct Complex
 {
  int realPart, imaginaryPart;
 };
struct Complex readComplex();
void displayComplex(struct Complex c);
struct Complex addComplex(struct Complex c1, strcut Complex c2);
struct Complex diffComplex(struct Complex c1, struct Complex c2);
struct Complex multiplyComplex(struct Complex c1, struct Complex c2);
void Menu();
void main()
{
 Menu();
}
void Menu()
{
  int Choice;
   while(Choice!=6)
    {
      printf("\nEnter Any One Of The Following Choices");
      printf("\n1. Read A Complex Number");
      printf("\n2. Display The Complex Number");
      printf("\n3. Add Two Complex Numbers");
      printf("\n4. Subtract Two Complex Numbers");
      printf("\n5. Multiply Two Complex Numbers");
      printf("\n6. Terminate The Program");
      scanf("%d", &Choice);
       switch(Choice)
        {
          
        }
    }
}