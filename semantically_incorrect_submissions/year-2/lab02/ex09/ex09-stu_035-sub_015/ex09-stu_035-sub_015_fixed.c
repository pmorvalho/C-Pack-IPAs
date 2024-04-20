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

  printf("%02d:%02d:%02d\n", hours, minutes, seconds);

  return 0;
}
