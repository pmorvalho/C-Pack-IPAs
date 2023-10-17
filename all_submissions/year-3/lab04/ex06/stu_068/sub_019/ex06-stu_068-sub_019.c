
#include <stdio.h>
#define MAX 100

void leLinha(char s[]){
    int c, i;
    c = getchar();

    for (i = 0; c != '\n' && c != EOF; i++){
        s[i] = c;
        c = getchar();

    }
    s[i] = '\0';
    
}

void maiusculas(char s[]){
    int i;
    leLinha(s);
    for(i = 0; s[i] != '\0'; i++){
        if (s[i] <= 'z' && s[i] >= 'a'){
            s[i] = s[i] - 'a' + 'A';
        }
        
    }
    s[i] = '\0';
    printf("%s\n", s);
}

int main(){
    char linha[MAX];
    
    maiusculas(linha);
    
    return 0;
}