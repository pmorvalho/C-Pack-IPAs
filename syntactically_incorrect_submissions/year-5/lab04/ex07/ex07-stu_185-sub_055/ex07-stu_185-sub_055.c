
#include <stdio.h>
#include <string.h>
#define MAX 80

int leLinha(char s[]){
    if (fgets(s, MAX, stdin) == NULL) return 1;
    int c = strlen(s);
    if (c > 0 && s[c - 1] == '\n') s[c - 1] = '\0';
    return c;
}

void apagaCaracter(char s[], char c){
    int i, j = 0;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] != c){
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

int main(){
    char s[MAX];
    char c;
    leLinha(s);
    c = getchar();
    getchar();
    apagaCaracter(s, c);
    printf("%s\n", s);
    return 0;
}