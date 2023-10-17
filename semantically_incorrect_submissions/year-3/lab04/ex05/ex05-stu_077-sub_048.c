
#include <stdio.h>

#define MAX 80

int lelinha(char str[]);

int main()
{
    char str[MAX];
    lelinha(str);
    printf("%s\n", str);
    return 0;
}

int lelinha(char str[])
{
    int i = 0, c;
    while((c = getchar()) != EOF && c != 'n')
    {
        str[i++] = c;
    }
    str[i] = '\0';
    return i;
}
