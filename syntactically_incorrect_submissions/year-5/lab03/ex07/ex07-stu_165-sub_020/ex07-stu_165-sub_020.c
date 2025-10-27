
#include <stdio.h>
enum operation {
  SUM,
  DIF,
};
int main() {
  char c;
  int sum = 0, num = 0;
  enum operation op = SUM;

  while((c = getchar()) != '\n') {
    switch (op) {
    case SUM:
      if(c == ' ') {
        sum += num;
        num = 0;
      } else if(c == '+') {
        op = SUM;
      } else if(c == '-') {
        op = DIF;
      } else {
        num = num*10 + (c - '0');
      }
      break;
    case DIF:
      if(c == ' ') {
        sum -= num;
        num = 0;
      } else if(c == '+') {
        op = SUM;
      } else if(c == '-') {
        op = DIF;
      } else {
        num = num*10 + (c - '0');
      }
      break;
    }
  }
  if (op == SUM)
    sum += num;
  else  
    sum -= num;
  printf("%d\n", sum);

  return 0;
}