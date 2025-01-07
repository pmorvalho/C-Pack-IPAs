
#include <stdio.h>

void quadrado(int n);

int main()
{
    int n;
    scanf("%d", &n);
    quadrado(n);
    return 0;
}

void quadrado(int n)
{
    for (int i = 1; i <= n; i++) {
	  for (int j = i; j < n + i; j++)
		  printf("%d%c", j, (j < n + i - 1 ? '\t' : '\n'));
	}
}
