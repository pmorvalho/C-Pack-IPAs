
#include <stdio.h>

#define MAX 100

void apagaCaracter(char s[], char c){

    for(int i = 0; i < MAX && s[i] != '\n'; i++){
        if (s[i] == c){
            s[i] = s[i+1];
            for(int u = i; u < MAX && s[i] != '\n'; u++){
                s[u] = s[u + 1];
            }
        }
    }
}

int main(){
    char str[MAX], c;
    int i = 0;

    for(; (c = getchar()) != EOF && c != '\n'; i++){
        str[i] = c;
    }
    c = getchar();
    str[i] = '\0';
    apagaCaracter(str, c);
    printf("%s\n", str);
}