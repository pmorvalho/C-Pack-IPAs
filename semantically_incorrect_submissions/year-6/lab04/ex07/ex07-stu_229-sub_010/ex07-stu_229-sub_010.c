
#include <stdio.h>

int leLinha(char s[]){
    int c, i = 0;
    while((c = getchar()) != '\n' && c != EOF){
        s[i++] = c;
    }
    s[i] = '\0';
    return c;
}

void apagaCaracter(char s[], char c){
    int i, n = 0;
    for(i = 0; s[i] != '\0'; i++){
        n +=1;
    }
    for(i = 0; i < n; i++){
        if(s[i] == c){
            s[i] = '\b';
        }
    }
}

int main(){
    char s[80] = "", c;
    leLinha(s);
    scanf("%c", &c);
    apagaCaracter(s, c);
    printf("%s\n", s);
    return 0;
}