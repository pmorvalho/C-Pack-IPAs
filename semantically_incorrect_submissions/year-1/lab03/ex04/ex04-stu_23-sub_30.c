#include <stdio.h>


int main()
{
 int e =0;
 char c,ant='0';
 while ((c=getchar()) != EOF)
 {
   if (c =='\n' || c ==' ' || c=='\t')
   {
    if (ant !='\n' && ant !=' ' && ant !='\t')
    {
     printf("%c\n",ant);
     ant ='0';
     e = 0;
    }
   }
   else
   {
    if (ant != '0' && ant !='\n' && ant !=' ' && ant !='\t')
    {
     printf("%c", ant);
     e = 1;
    }
    else if ( ant !='\n' && ant !=' ' && ant !='\t' && e==1)
     printf("%c",ant);
   }
  ant =c;
 }
 return 0;
}
