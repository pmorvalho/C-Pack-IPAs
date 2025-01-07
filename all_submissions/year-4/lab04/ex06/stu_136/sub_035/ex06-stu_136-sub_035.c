

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

void maiusculas(char s[]) {

    int len = strlen(s);
    int i;

    for (i=0; i<len; i++) {

        if ((s[i]>='a')&&(s[i]<='z'))
            s[i] -= 32;
    }
}

int main() {

    char str[MAX];

    leLinha(str);
    maiusculas(str);
    puts(str);

    return 0;
}
