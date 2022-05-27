#include <stdio.h>


int main()
{
 char c,ant='0';
 while ((c=getchar()) != EOF)
 {
   if (c =='\n' || c ==' ' || c=='\t')
   {
    if (ant !='\n' && ant !=' ' && ant !='\t')
    {
     printf("%c\n",ant);
     ant ='0';
    }
   }
   else
   {
    if (ant != '0')
    {
     printf("%c", ant);
    }
   }
  ant =c;
 }
 return 0;
}
