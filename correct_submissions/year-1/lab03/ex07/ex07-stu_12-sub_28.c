#include <stdio.h>

int main()
{
  int c, o=0, a=0, b='+';
  while ((c=getchar())!=EOF) {
    if (c >= '0' && c <= '9') {
      a = (a*10) + (c-'0');
    } else if (c == '+') {
      if (b=='+') {
        o += a;
      } else {
        o -= a;
      }
      b = '+';
      a = 0;
    } else if (c == '-') {
      if (b=='+') {
        o += a;
      } else {
        o -= a;
      }
      b = '-';
      a = 0;
    }
  }
  if (b=='+') {
        o += a;
      } else {
        o -= a;
      }
  printf("%d\n", o);
  return 0;
}