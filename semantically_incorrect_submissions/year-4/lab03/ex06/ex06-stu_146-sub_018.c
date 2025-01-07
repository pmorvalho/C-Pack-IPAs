

#include <stdio.h>

int main() {
    
    int c, digito, soma = 0;
    scanf("%d",&c);
    while (c != 0) {
        digito = c % 10; 
        c = c / 10; 
        soma += digito; 
    }
    if (soma % 9 == 0) printf("yes");
    else printf("no");
    return 0;
}