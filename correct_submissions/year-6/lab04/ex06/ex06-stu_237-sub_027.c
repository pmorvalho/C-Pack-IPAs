
#include <stdio.h>

#define MAX 80

void leLinha(char s[]) {
    short i;
    char c;

    i = 0;  
    while (i < MAX - 1 && (c = getchar()) != '\n' && c != EOF) {
        s[i] = c;
        i++;
    }

    s[i] = '\0';
}

void maiusculas(char s[]) {
    int i;
    int c;

    for(i = 0; i < MAX && (c = s[i]) != '\0'; i++) {
        if (c >= 'a' && c <= 'z') {
            s[i] = s[i] - 32; 
        }
    }
}

int main() {
    char s[MAX];

    leLinha(s);
    maiusculas(s);

    printf("%s\n", s);

    return 0;
}