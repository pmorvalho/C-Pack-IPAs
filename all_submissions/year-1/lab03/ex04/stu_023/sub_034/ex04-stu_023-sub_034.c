#include <stdio.h>


int main()
{
 int e =0;
 char c,ant='k';
 while ((c=getchar()) != EOF)
 {
  if (c =='\n' || c ==' ' || c=='\t' || (c>= '0' && c<='9'))
  {
   if (c =='\n' || c ==' ' || c=='\t')
   {
    if (ant !='\n' && ant !=' ' && ant !='\t' && ant !='k')
    {
      printf("%c%c",ant,c);
     ant ='k';
     e = 0;
    }
   }
   else 
   {
    if (ant != 'k' && ant != '0' && ant !='\n' && ant !=' ' && ant !='\t')
    {
     printf("%c", ant);
     e = 1;
    }
    else if ( ant !='\n' && ant !=' ' && ant !='\t' && e==1)
     printf("%c",ant);
   }
  ant =c;
  }
 }
 c= 2;
 return 0;
}
