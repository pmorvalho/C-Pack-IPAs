
#include <stdio.h>

#define MAX 100

void apagaCaracter(char s[], char c){

    for(int i = 0; i < MAX && s[i] != '\0';){
        if (s[i] == c){
            
            for(int u = i; u < MAX && s[u] != '\0'; u++){
                s[u] = s[u + 1];
            }
            i = 0;
        } else i++;
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