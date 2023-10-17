#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
  int i, size, result = 1; 
  char s[MAX];
  
  scanf("%s", s);
  size = strlen(s);
  
  for (i = 0; i < size; i++)
    if (s[i] != s[size - i - 1])
      result = 0;
      
  if (result)
    printf("yes\n");
  else
    printf("no\n");

  return 0;
}
