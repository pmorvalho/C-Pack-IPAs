
#include <stdio.h>
#include <string.h>
#define VECMAX 100

int apagaCaracter(char s[], char c){
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
    lim = j;
    for (i = 0; i < lim; i++){
        s[i] = s2[i];
    }
    return lim;
}
int main(){
    int i, lim;
    char s_g[VECMAX], c, l;
    for(i = 0; (l = getchar()) != '\n'; i++){
        s_g[i] = l; 
    }
    s_g[i] = '\0';
    c = getchar();
    lim = apagaCaracter(s_g, c);
    for (i = 0; i < lim; i++){
        printf("%c", s_g[i]);
    }
    printf("\n");
    return 0;
}