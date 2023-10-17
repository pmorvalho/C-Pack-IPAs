#include <stdio.h>

int main()
{
  int a, b, c;

  printf("Escreva 3 números:\n");
  scanf("%d\n%d\n%d", &a, &b, &c);

  if (a > b && a > c)
    printf("%d é o maior número\n", a);
  else if (b > a && b > c)
    printf("%d é o maior número\n", b);   
   else
    printf("%d é o maior número\n", c); 
  return 0;
}