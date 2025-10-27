

#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char c, str[MAX];
    int i=0, tamanho, dentro_mens = 0, j;

    while ((c = getchar()) != '\n' && c != EOF) {
        str[i] = c;
        i++;
    }
    str[i] = '\0';

    tamanho = strlen(str);

    for (j=0; j<tamanho; j++) {
        if (str[j] == '\\' && j + 1 < tamanho) {
            if (str[j + 1] == '"' || str[j + 1] == '\\') {
                putchar(str[j + 1]);
                j++;
            } 
            else putchar('\\');
        }
        else if (str[j] == '"') {
            if (dentro_mens)
                putchar("\n");
                dentro_mens = 0;
            dentro_mens++;
        }
        else if (dentro_mens)
            putchar(str[j]);

    }
    return 0;
}