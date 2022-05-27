#include <stdio.h>
#include <string.h>

#define MAX 80

int main()
{
    char s[MAX];
    int i, size, cont = 0;

    scanf("%s", s);
    size = strlen(s);

    for (i = 0; i < size / 2; ++i){
        if (s[i] == s[size - 1 - i])
            ++cont;
    }

    printf(cont == size / 2 ? "yes\n" : "no\n");
    return 0;
}