
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
	  for (int j = i; j < n + i; j++) {
	      if (j < i + 1)
    	      printf("%d\t", j);
    	  else 
    	    printf("%d", j);
	  }
	  printf("\n");
    }
}
