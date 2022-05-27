#include <stdio.h>

#define VECMAX 100
#define SIMBOLO '*'



void init_vec(int vec[], int tam);
void read_values(int vec[], int tam);
int check_all_zeros(int vec[], int tam);
void print_graph(int vec[], int tam);

int main()
{
  int n;
  int vec[VECMAX];
  init_vec(vec, VECMAX);

  scanf("%d", &n);
  read_values(vec, n);
  print_graph(vec, n);
  
  return 0;
}

void init_vec(int vec[], int tam)
{
  int i;
  
  for (i = 0; i < tam; i++) {
    vec[i] = -1;
  }
}

void read_values(int vec[], int tam)
{
  int i;

  for (i = 0; i < tam; i++) {
    scanf("%d", &vec[i]);
  }
}

int check_all_zeros(int vec[], int tam) {
  int i;

  for (i = 0; i < tam; i++) {
    if (vec[i] != 0) {
      return 0;
    }
  }
  return 1;
}

void print_graph(int vec[], int tam)
{
  int i;

  while (!check_all_zeros(vec, tam)) {
    for (i = 0; i < tam; i++) {
      if (vec[i] != 0) {
	putchar(SIMBOLO);
	vec[i]--;
      }
      else {
	putchar(' ');
      }
    }
    putchar('\n');
  }
}
