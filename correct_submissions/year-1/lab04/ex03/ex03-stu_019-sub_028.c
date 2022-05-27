#include <stdio.h>

#define VECMAX 100

void iniciar_vec_chars(char vec[100][100], int n_l, int n_c)
{
  int i, j;
  for(i = 0; i < n_l; i++)
    for(j = 0; j < n_c; j++)
      vec[i][j] = '0';
}

int main()
{
  int n, num, i, j, k, num_maior = 0, u[VECMAX];
  char vec_chars[VECMAX][VECMAX];
  
  scanf("%d", &n);
  for(k = 0; k < n; k++)
  {
    scanf("%d", &num);
    if(num > num_maior)
      num_maior = num;
    u[k] = num;
  }

  iniciar_vec_chars(vec_chars, VECMAX, VECMAX);
  for(j = 0; j < n; j++)
    for(k = num_maior-1; u[j] > 0; k--)
    {
      vec_chars[k][j] = '*';
      u[j]--;
    }
  for(i = 0; i < num_maior; i++)
  {
    for(j = 0; j < n; j++)
    {
      if(vec_chars[i][j] == '*')
	printf("%c", vec_chars[i][j]);
      else
	printf(" ");
    }
    printf("\n");
  }
  return 0;
}
