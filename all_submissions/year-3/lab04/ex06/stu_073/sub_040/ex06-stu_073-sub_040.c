
#include <stdio.h>
#include <string.h>

#define MAX 80

int leLinha(char s[]) {
    int i, c;
    for (i = 0; i < MAX && (c = getchar()) != EOF && c != '\n'; i++) {
        s[i] = c;
    }
    s[i] = '\0';
    return i;
}


void maiusculas(char s[]){
    int i;
    for (i = 0; s[i] != '\0'; i++){
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - ('a'-'A');

    }

}


int main () {
    char s[MAX];
    leLinha(s);
    maiusculas(s);
    printf("%s\n", s);
    return 0;
}