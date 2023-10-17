
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
    int i;
    char s[MAX_C];
    char s_destino[MAX_C];
    leLinha(s);
    for(i = 0; s[i] != '\0';i++){
        s_destino[i] = s[i];
    }
    s_destino[i] = '\0';
    printf("%s\n",s_destino);
    return 0;
}