
#include <stdio.h>
#include <string.h>
#define VECMAX 100

void apagaCaracter(char s[], char c){
    int i, lim, j;
    char s2[VECMAX];
    j = 0;
    lim = strlen(s);
    for (i = 0; i < lim; i++){
        if (s[i] != c){
            s2[j] = s[i];
            ++j;
        }     
    }
    for (i = 0; i < lim; i++){
        printf("%c", s2[i]);
    }
}

int main(){
    int i;
    char s_g[VECMAX], c, l;
    for(i = 0; (l = getchar()) != '\n'; i++){
        s_g[i] = l; 
    }
    s_g[i] = '\0';
    c = getchar();
    
    apagaCaracter(s_g, c);
    return 0;
}