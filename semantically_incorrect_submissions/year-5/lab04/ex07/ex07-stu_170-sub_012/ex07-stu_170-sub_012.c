
#include <stdio.h>
#define MAX 80

void apagaCaracter(char s[], char c);
int lelinha(char s[]);

int main() {
    char c, s[80];
    lelinha(s);
    c = getchar();
    getchar(); 
    apagaCaracter(s, c);
    printf("%s\n", s);

    return 0;
}


void apagaCaracter(char s[], char c) {
    int i, i2;
    for (i = 0; i < MAX; i++)
        if (s[i] == c){
            for (i2 = i; i2 < MAX-1; i2++) 
                s[i2] = s[i2+1]; 
        }
}



int lelinha(char s[]) {
    int contador = 0;
    do {
        s[contador] = getchar();
    } while (s[contador] != '\n' && s[contador] != EOF && ++contador);
    s[contador] = '\0';
    return contador;
}