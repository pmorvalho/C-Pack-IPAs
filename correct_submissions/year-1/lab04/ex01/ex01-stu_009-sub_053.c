#include <stdio.h>

#define VECMAX 100

void init_vec(int vec[], int tam);
void read_numbers(int vec[], int tam);
void print_graph(int vec[], int tam);

int main()
{
  int n;
  int vec[VECMAX];
  init_vec(vec, VECMAX);
  
  scanf("%d", &n);
  read_numbers(vec, n);
  print_graph(vec, VECMAX);
  
  return 0;
}

void init_vec(int vec[], int tam)
{
  int i;
  
  for (i = 0; i < tam; i++) {
    vec[i] = 0;
  }
}

void read_numbers(int vec[], int tam)
{
  int i;
  
  for (i = 0; i < tam; i++) {
    scanf("%d", &vec[i]);
  }
}

void print_graph(int vec[], int tam)
{
  int i;
  int i_aux;
  
  for (i = 0; i < tam; i++) {
    if (vec[i] != 0) {
      for (i_aux = 0; i_aux < vec[i]; i_aux++) {
	putchar('*');
      }
      putchar('\n');
    }
  }
}
