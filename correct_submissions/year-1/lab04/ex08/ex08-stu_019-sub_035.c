#include <stdio.h>

#define MAX_CHARS 100

int main()
{
  int i;
  char chars_num1, chars_num2, num1[MAX_CHARS], num2[MAX_CHARS];

  for(i = 0; i < MAX_CHARS-1 && (chars_num1 = getchar()) != '\n' && chars_num1 != ' '; i++)
    if( chars_num1 >= '0' && chars_num1 <= '9')
      num1[i] = chars_num1;
  num1[i] = '\0';

  for(i = 0; i < MAX_CHARS-1 && (chars_num2 = getchar()) != '\n' && chars_num2 != ' ' && chars_num2 != EOF; i++)
    if( chars_num2 >= '0' && chars_num2 <= '9')
      num2[i] = chars_num2;
  num2[i] = '\0';

  for(i = 0; num2[i] == num1[i] && num2[i] != '\0'; i++)
    ;

  if(num2[i] > num1[i])
    printf("%s\n", num2);
  else
    printf("%s\n", num1);
      
  return 0;
}
