
#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];

    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    
    int comprimento = strlen(palavra);
    int ehPalindromo = 1;  

    for (int i = 0; i < comprimento / 2; i++) {
        if (palavra[i] != palavra[comprimento - 1 - i]) {
            ehPalindromo = 0;  
            break;
        }
    }

    
    if (ehPalindromo) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}