
#include <stdio.h>
#include <string.h>

#define BUFFER 100

int leLinha(char s[BUFFER]);
void maiusculas(char s[BUFFER]);

int main() {

    int i;
    char string[BUFFER];
    int n = leLinha(string);

    maiusculas(string);

    for (i = 0; i < n; i++) {
        printf("%c", string[i]);
    }

    putchar('\n');

    return 0;

}

int leLinha(char s[BUFFER]) {

    char c;
    int j = 0;

    while ((c = getchar()) != EOF) {

        if (c == '\n') {
            break;
        }

        s[j] = c;
        j++; 
    }

    return j;
}




void maiusculas(char s[BUFFER]) {

    int i;

    for (i = 0; s[i] != '\0'; i++) {
        
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
    }

}


