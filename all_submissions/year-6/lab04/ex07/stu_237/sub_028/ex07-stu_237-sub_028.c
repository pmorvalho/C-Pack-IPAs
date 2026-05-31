
#include <stdio.h>

#define MAX 80

void apagaCaracter(char s[], char c) {
    int i, j;
    
    j = 0;
    
    for(i = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j] = s[i];
            j++;
        }
    }

    s[j] = '\0';
}

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

int main() {
    char s[MAX];
    char apagar;

    leLinha(s);
    scanf("%c", &apagar);
    apagaCaracter(s, apagar);

    printf("%s\n", s);

    return 0;
}