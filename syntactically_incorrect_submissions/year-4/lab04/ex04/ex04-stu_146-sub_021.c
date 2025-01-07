

#include <stdio.h>
#include <string.h>
#define MAX 80

int main() {
    enum state{NO, YES}; 
    int i, j, palin = YES;
    char palavra[80];
    scanf("%s", palavra);
    int tamanho = strlen(palavra);

    for (i = 0, j = tamanho - 1; i != tamanho; i++, j--) { 
        if (palavra[i] != palavra[j]) palin = NO; 
    
    }
    if (palin) printf("yes");
    else printf("no");
    return 0;
}