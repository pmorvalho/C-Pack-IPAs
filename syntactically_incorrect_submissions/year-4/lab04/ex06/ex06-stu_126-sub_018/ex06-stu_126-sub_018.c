
#include <stdio.h>
#include <string.h>

void maiusculas(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 'a' + 'A';
        }
    }
}

int main() {
    char linha[100]; 

    
    fgets(linha, sizeof(linha), stdin); 

    if (linha[strlen(linha) - 1] == '\n') {
        linha[strlen(linha) - 1] = '\0';
    }

    
    maiusculas(linha);

    
    printf("%s\n", linha);

    return 0;
}
