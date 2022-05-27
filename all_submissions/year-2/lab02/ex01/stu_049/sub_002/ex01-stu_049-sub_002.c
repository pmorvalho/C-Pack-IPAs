#include <stdio.h>

int main()
{
  int a, b, c;

  scanf("%d%d%d", &a, &b, &c);

  if (a > b && a > c)
    printf("%d é o maior número\n", a);
  else if (b > a && b > c)
    printf("%d é o maior número\n", b);   
  else
    printf("%d é o maior número\n", c); 

    
  return 0;
}