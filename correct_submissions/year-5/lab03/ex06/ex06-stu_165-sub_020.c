
#include <stdio.h>
#include <stdlib.h>

int main() {
  int sum = 0, i = 0;
  char* string = malloc(sizeof(char)*100);
  scanf("%s", string);

  while(string[i] != '\0') {
    sum += string[i] - '0';
    i++;
  }
  free(string);
  if(sum % 9 == 0) 
    printf("yes\n");
  else 
    printf("no\n");

  return 0;
}