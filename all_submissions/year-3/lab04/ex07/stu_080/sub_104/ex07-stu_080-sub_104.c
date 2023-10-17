
#include <stdio.h>
#define MAX 100
void apagaCaracter(char s[], char c){
    int ind;
    char s_aux[MAX];
    for(ind = 0;s[ind] != '\0';ind++){
        if (s[ind] != c){
            s_aux[ind] = s[ind];
        }
    }
    s_aux[ind] ='\0';
    return s_aux;
}

int main(){
    char s[MAX],p,i,c;
    p = getchar();
    apagaCaracter(s, c);
    printf("%s",s);
    return 0;
}