
#include <stdio.h>
#define MAX 80

void maiusculas(char s[]) {
    int i = 0;

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 0x20; 
        }
    }
}

int leLinha(char s[]) {
    int i = 0;
    char c;

    while ((c = getchar()) != '\n' && c != EOF) {
        s[i++] = c;
    }

    s[i] = '\0'; 

    return i; 
}

int main() {
    char str[MAX + 1];

    leLinha(str);

    maiusculas(str);

    puts(str);

    return 0;
}