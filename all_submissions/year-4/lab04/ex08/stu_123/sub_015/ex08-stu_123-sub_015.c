#include <stdio.h>

#define MAX_VEC 100

int compara(char *num1, char *num2) {
  int i = 0;

  while (num1[i] != '\0' && num1[i] == num2[i])
    i++;

  return num1[i] - num2[i];
}

int main() {
  char num1[MAX_VEC + 1], num2[MAX_VEC + 1];

  scanf("%s %s", num1, num2);
 
  puts(compara(num1, num2) >= 0 ? num1 : num2);
  return 0; 
}
