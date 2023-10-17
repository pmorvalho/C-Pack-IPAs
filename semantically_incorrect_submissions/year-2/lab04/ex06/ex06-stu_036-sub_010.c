#include <stdio.h>

int convertor = 'A' - 'a';

void maiusculas(char s[]){
    int i = -1;
    while(s[i++] != '\n') {
        if (s[i] >= 'a')
            s[i] += convertor;
    }
}

int main() {
    char s[50];
    fgets(s, 50, stdin);
    maiusculas(s);
    printf("%s",s);
    return 0;
}