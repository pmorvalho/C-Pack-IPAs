#include <stdio.h>

int main()  {

 char c;

 int soma = 0;

 while ((c = getchar()) != '\n')  

  if ('0' < c && c <= 9)  

   soma += (c - '0');

 if (soma < 9 || soma % 9 != 0)
  
  printf("no\n");

 else
  
  printf("yes\n");

 return 0;
}
