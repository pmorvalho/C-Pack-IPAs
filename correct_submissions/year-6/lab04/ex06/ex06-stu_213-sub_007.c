
#include <stdio.h>
#include <string.h>

#define MAX 80

int leLinha(char s[]) {
    int c, i;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    return i;
}

void maiusculas(char s[]){
    int i, len;
    len = strlen(s);
    for (i = 0; i < len; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] += ('A' - 'a');
    }
}

int main() {
    char linha[MAX];

    leLinha(linha);
    maiusculas(linha);
    printf("%s\n", linha);
    
    return 0;
}