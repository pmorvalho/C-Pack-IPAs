

#include <stdio.h>
#include <string.h>

#define MAX 80

int leLinha(char s[]) {

    int i = 0;
    char c = getchar();

    while ((c!='\n')&&(c!=EOF)&&(i<MAX-1)) {
        s[i++] = c;
        c = getchar();
    }

    s[i] = '\0';
    return i;
}

int main() {

    int i;
    int len;
    char str[MAX];

    len = leLinha(str);

    for (i=0; (i<len)&&(i<MAX); i++)
        putchar(str[i]);
    
    putchar('\n');

    return 0;
}
