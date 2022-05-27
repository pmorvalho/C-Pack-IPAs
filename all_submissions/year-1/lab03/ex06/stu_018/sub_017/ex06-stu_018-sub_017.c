#include <stdio.h>

int main()  {

 char c;

 int soma = 0;

 while ((c = getchar()) != '\n')  

  if ('0' < c && c <= 9)  

   soma += (c - '0');

 if ((soma % 9) == 0)
  
  printf("yes\n");

 else
  
  printf("no\n");

 return 0;
}
