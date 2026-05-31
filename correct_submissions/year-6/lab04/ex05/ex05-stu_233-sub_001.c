

# include <stdio.h>
# include <string.h>
# define TAMANHO_MAX 80

int lelinha(char str[]) {
    int i = 0;
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {
        if (i < TAMANHO_MAX - 1) str[i++] = c;
    }
    str[i] = '\0';
    return i;
}

int main() {
    char str[TAMANHO_MAX];
    lelinha(str);
    printf("%s\n", str);
    return 0;
}