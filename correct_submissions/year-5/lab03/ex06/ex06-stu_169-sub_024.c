

#include <stdio.h>

int main() {
    int soma = 0;
    char c;

    
    while ((c = getchar()) != '\n' && c != ' ' && c != EOF) {
        soma += c - '0';  
    }

    
    if (soma % 9 == 0)
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}



 

