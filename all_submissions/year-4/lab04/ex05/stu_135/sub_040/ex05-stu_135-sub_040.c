
#include <stdio.h>

#define MAX 80

int leLinha(char s[]);

int main()
{
    char c;
    

    
    while ((c = getchar())!= EOF && c != '\n')
        putchar(c);

    
    
    return printf("\n") == EOF;
}

int leLinha(char s[])
{
    int i;
    fgets(s, MAX, stdout);
    printf("%s", s);

    for (i = 0; i < MAX; i++) {
        if (s[i] == '\0'){
            return i;
        }
    }
    return 0;
}