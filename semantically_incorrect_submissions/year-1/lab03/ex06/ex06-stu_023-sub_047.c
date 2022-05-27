#include <stdio.h>

int main()
{
 char c;
 long soma=0;
 while ((c=getchar()) != EOF)
 {
  if (c>='1' && c<='9')
  {
   soma+= (int)c-(int)'1'+1;
  }
  if (c == ' ' || c == '\t' || c== '\n')
  {
   if (soma%9 ==0 && soma >= 9)
    printf("yes\n");
   else
    printf("no\n");
   soma=0;
  }
 }
 return 0;
}
