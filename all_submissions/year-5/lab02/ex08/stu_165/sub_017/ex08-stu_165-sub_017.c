
#include <stdio.h>

int main() {
  int i;
  float N, temp, media = 0;

  scanf("%f", &N);

  for (i = 0; i < N; i++) {
    scanf("%f", &temp);
    media += temp;
  }
  media = media/N;

  printf("%.2f\n", media);

  return 0;
}