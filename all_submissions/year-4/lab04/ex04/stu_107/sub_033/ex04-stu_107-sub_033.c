
#include <stdio.h>
# define MAX 80

int main()
{
    char s[MAX];
    int i = -1, j = -1;

    scanf("%s", s);

    while(s[++j]);
    while(++i < --j && s[i] == s[j]);

    printf("%s\n", s[i] == s[j]? "yes" : "no");
    return 0;
}