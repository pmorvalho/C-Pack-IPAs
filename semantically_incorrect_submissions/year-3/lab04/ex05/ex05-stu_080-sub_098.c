
#include <stdio.h>
#include <string.h>
#define MAX_C 100

int leLinha(char s[]){
    int c, ind;
    c = getchar();
    for (ind = 0;ind < MAX_C && (c != EOF && c != '\n'); ind++)
        s[ind] = c;
    s[ind] = '\0';
    return ind;
}

int main(){
    char s[MAX_C],s_destino[MAX_C];
    int comprimento,i;
    comprimento = leLinha(s);
    for(i = 0; i < comprimento; i++){
        s_destino[i] = s[i];
    }
    s_destino[i] = '\0';
    printf("%s\n",s_destino);
    return 0;
}