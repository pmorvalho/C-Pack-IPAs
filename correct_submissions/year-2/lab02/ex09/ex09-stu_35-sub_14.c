#include <stdio.h>

#define SECSINHOUR 3600
#define SECSINMIN 60



int main() {
  int time, hours, minutes, seconds;

  scanf("%d", &time);

  hours = time / SECSINHOUR;
  time %= SECSINHOUR;
  minutes = time / SECSINMIN;
  seconds = time % SECSINMIN;

  if (hours < 10)
    printf("0%d:", hours);
  else
    printf("%d", hours);

  if (minutes < 10)
    printf("0%d:", minutes);
  else
    printf("%d:", minutes);

  if (seconds < 10)
    printf("0%d\n", seconds);
  else
    printf("%d\n", seconds);

  return 0;
}
