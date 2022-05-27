#include <stdio.h>

int main()
{
 char c;
 int cont=0;
 long soma=0;
 while ((c=getchar()) != EOF)
 {
  if (c>='0' && c<='9')
  {
   soma+= (int)c-(int)'0';
   cont = 1;
  }
  else if ((c == ' ' || c == '\t' || c== '\n') && cont==1)
  {
   if (soma%9 ==0 && soma >= 9)
    printf("yes\n");
   else
    printf("no\n");
   soma=0;
   cont=0;
  }
 }
 soma = 0;
 return 0;
}
