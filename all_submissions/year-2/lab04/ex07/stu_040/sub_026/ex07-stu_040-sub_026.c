#include <stdio.h>

void apagaCaracter(char s[], char c) {
    int i = 0, current;

    while(s[i] != '\0') {
        if(s[i] != c)
            s[current++] = s[i]; 
        i++;
    }
}

int main() {
    char s[MAX];

    apagaCarater(s);
    c = getchar();
    printf("%s\n", s);

    return 0;
}