
#include <stdio.h>
#include <string.h>



void apagaCaracter(char s[80], char c) {

    int i;
    int j;

    for (i = 0; s[i] != '\0'; i++){
        if (s[i] == c) {
            for (j = i; s[j] != '\0'; j++) {
                s[j] = s[j + 1]; 
                }
        }
    }
}

int main () {

    char s[80];
    char c;

    fgets(s, 80, stdin);
    c = getchar();

    apagaCaracter(s, c);
    printf("%s", s);

    return 0;   
}