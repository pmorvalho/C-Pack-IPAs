
#include <stdio.h>
#define MAX 80

int leLinha(char s[]){
    int ch, i = 0;

    while ((ch = getchar()) != EOF && ch != '\n') {
        if (i < MAX - 1)
            s[i++] = (char)ch;
    }
    s[i] = '\0';
    return i;
}

void apagaCaracter(char s[], char c){
    int i = 0, j = 0;
    while (s[i] != '\0') {
        if (s[i] != c) {
            s[j++] = s[i];
        }
        i++;
    }
    s[j] = '\0';
}

int main(){
    char s[MAX], c;
    leLinha(s);          
    scanf(" %c", &c);    
    apagaCaracter(s, c);
    printf("%s\n", s);
    return 0;
}