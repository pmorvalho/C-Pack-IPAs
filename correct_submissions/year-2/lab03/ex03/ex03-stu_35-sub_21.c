#include <stdio.h>



void cruz(int N) {
  int i = 0, j = 0;
  while (i++ < N) {
    while (j++ < N) {
      if (j == i || j == N - i + 1)
        if (j != N)
		  printf("* ");
		else
		  printf("*");
      else
		if (j != N)
          printf("- ");
		else
		  printf("-");
    }
    printf("\n");
    j = 0;
  }
}

int main() {
  int N;
  scanf("%d", &N);
  cruz(N);

  return 0;
}
