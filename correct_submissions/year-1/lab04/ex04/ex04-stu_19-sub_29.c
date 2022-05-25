#include <stdio.h>

#define MAX 80

int main()
{
  int i1 = 0, i2 = -1, j = 0;
  char palavra[MAX], val_retorno = '0';

  scanf("%s", palavra);
  while(palavra[j++] != '\0')
    i2++;
  while((i2 - i1) != 1 && i2 != i1)
  {
    if(palavra[i2] != palavra[i1])
      val_retorno = 'n';
    i2--;
    i1++;
  }
  if (val_retorno == '0')
    printf("yes\n");
  else
    printf("no\n");
  return 0;
}
