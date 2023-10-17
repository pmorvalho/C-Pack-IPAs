#include <stdio.h>

#define VECMAX 100
#define SIMBOLO '*'
#define INIT_VAL 0

void init_vec(int vec[], int tam, int val);
int read_and_give_max(int vec[], int tam);
int all_above_max(int vec[], int tam, int max);
void print_graph(int vec[], int tam, int max);


int main() {
  int n;
  int vec[VECMAX];
  int max;
  
  scanf("%d", &n);
  init_vec(vec, VECMAX, INIT_VAL);
  max = read_and_give_max(vec, n);
  
  print_graph(vec, n, max);
  
  return 0;
}


void init_vec(int vec[], int tam, int val)
{
  int i;
  
  for (i = 0; i < tam; i++) {
    vec[i] = val;
  }
}

int read_and_give_max(int vec[], int tam)
{
  int i;
  int max;
  
  max = 0; 

  for (i = 0; i < tam; i++) {
    scanf("%d", &vec[i]);
    if (vec[i] > max) {
      max = vec[i];
    }
  }

  return max;
}

int all_above_max(int vec[], int tam, int max) {
  int i;

  for (i = 0; i < tam; i++) {
    if (vec[i] <= max) {
      return 0;
    }
  }
  return 1;
}
void print_graph(int vec[], int tam, int max)
{
  int i;

  while (!all_above_max(vec, tam, max)) {
    for (i = 0; i < tam; i++) {
      if (max > vec[i]) {
	putchar(' ');
      }
      else {
	putchar(SIMBOLO);
      }
      vec[i]++;
    }
    putchar('\n');
  }
}
