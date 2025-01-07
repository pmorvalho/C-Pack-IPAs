
#include <stdio.h>
#include <string.h>
#define VECMAX 100
#define MININ 97
#define MINFIM 122
#define MAIIN 65

void maiusculas(char s[]){
    int i, lim;
    lim = strlen(s);
    for (i = 0; i < lim; i++){
        if (s[i] >= MININ && s[i] <= MINFIM){
            s[i] = s[i] - MININ + MAIIN;    
        }
    }
}

int leLinha(char s[]){
    int n_c, i;
    char c;
    for (i = 0; (c = getchar()) != '\n' && c != EOF ; i++){
        s[i] = c;
    }
    n_c = strlen(s);
    maiusculas(s);
    for (i = 0; i < n_c; i++){
        printf("%c", s[i]);
    }
    printf("\n");
    return n_c;
}

int main(){
    char s_g[VECMAX];
    leLinha(s_g);
    return 0;
}





