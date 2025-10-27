
#include <stdio.h>

#define MAX 80

int main() {
    char n;
    int i = 0, e = 0, estado = 0;
    char palavras[MAX][MAX];
    while(n != EOF) {
        scanf("%c", &n);
        palavras[0][i] = n;
        ++i;
    }
    --i;
    palavras[0][i] = '\n';
    --i;
    while(i >= 0) {
        palavras[1][i] = palavras[0][e];
        ++e;
        --i;
    }
    --e;
    while(e >= 0) {
        if(palavras[0][e] == palavras[1][e]) {
            --e;
        } else {
            estado = 1;
            --e;
        }
        
    }
    (estado == 1) ? printf("no\n") : printf("yes\n");
    return 0;
}