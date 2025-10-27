
#include <stdio.h>
#include <string.h>

int lelinha(char s[]) {
    return strlen(s);
}

int main() {
    char s[100], c, aux;
    int i = 0;

    while ((c = getchar()) != '\n' && c != EOF) {
        s[i++] = c;
    }

    scanf("%c", &aux);
    
    int len = lelinha(s);
    for(int i = 0; i < len; i++) {
        if(s[i] != aux) {
            printf("%c", s[i]);
        } 
    }
    printf("\n");
    return 0;
}