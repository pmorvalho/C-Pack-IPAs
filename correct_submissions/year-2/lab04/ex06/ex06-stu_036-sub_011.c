#include <stdio.h>



void maiusculas(char s[]){
    int i = -1;
    int convertor = 'A' - 'a';
    while(s[i++] != '\n' && s[i] != '\0') {
        if (s[i] >= 'a')
            s[i] += convertor;
    }
}

int leLinha(char s[]) {
    int n = 0;
    char c;
    while ((c=getchar()) != '\n' && c!=EOF) {
        s[n] = c;
        n++;
    }
    s[n] = '\0';
    return n;
}

int main() {
    char s[100];
    leLinha(s);
    maiusculas(s);
    printf("%s\n",s);
    return 0;
}