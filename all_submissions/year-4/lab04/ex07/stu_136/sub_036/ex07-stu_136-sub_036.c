

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

void apagaCaracter(char s[], char c) {

    int len = strlen(s);
    int i = 0, j = 0;
    char nova_s[MAX];

    while (i < len) {

        if (s[i] != c) {
            nova_s[j] = s[i];
            i++;
            j++;
        }
        else
            i++;
    }

    nova_s[i] = '\0';
    strcpy(s,nova_s);
}

int main() {

    char c;
    char str[MAX];

    leLinha(str);
    scanf("%c",&c);
    apagaCaracter(str,c);
    puts(str);

    return 0;
}