#include <stdio.h>

int main()
{
 int dentro=0;
 char c,ant= 'k';
 while ((c=getchar()) != EOF)
 {
  if (c== '"' && ant != '\\' && dentro ==0)
     dentro =1;
  else if (c== '"' && ant != '\\' && dentro ==1)
     dentro =0;
  else if (ant == '\\' && c== '\"')
     printf("\"");
  else if (ant == '\\' && c== '\\')
     printf("\\");
  else if (dentro == 1 && c !='\\' && c != '\"')
     printf("%c",c);
  ant = c;
  if (dentro ==0 && (c== '\n' || c== ' ' || c== '\t'))
     printf("%c",c);
 }
 return 0;
}
