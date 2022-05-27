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
      printf("%c",ant);
     ant ='k';
     e = 0;
    }
    printf("%c",c);
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
 if (ant == '0' && e == 0)
 {
  printf("\n");
  putchar('0');
  printf("\n");
 }
 if(e==1)
 {
  putchar(ant);
  printf("\n");

 }
 return 0;
}
