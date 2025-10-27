

#include <stdio.h>

int le_linha(char s[]) {
    int i = 0;
    char c = getchar();

    while (c != '\n' && c != EOF) {
        s[i] = c;
        i++;
        c = getchar();
    }   
    s[i] = '\0';

    return i;
}

int main() {
    char linha[100];
    int n_carcteres = le_linha(linha);

    if (n_carcteres > 0) {
        printf("%s\n", linha);
    } else{
        printf("Linha vazia\n");
    }

    return 0;
}
