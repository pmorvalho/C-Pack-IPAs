

# include <stdio.h>

void apagaCaracter(char str[], char c) {
    int current = 0;
    int i;

    while (str[i] != '\0') {
        if (str[i] != c) str[current++] = str[i];
        i++;
    }
    str[current] = '\0';
}