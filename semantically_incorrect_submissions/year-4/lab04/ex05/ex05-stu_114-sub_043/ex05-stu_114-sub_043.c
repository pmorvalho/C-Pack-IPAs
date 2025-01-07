
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 80

int leLinha(char s[MAX_LENGTH]) {
    int i = 0;
    int tamanho = 0;
    fgets(s, MAX_LENGTH, stdin);

    tamanho = strlen(s);

    while (i < tamanho - 1) {
        if (s[i] == '\0') {
            s[i] = '\n';
        }
        i++;
    }
    while(s[i] != '\n' && s[i] != '\0' && s[i] != EOF) {
        i++;
    }
    printf("%s", s);
    return i;
    }

int main() {

    char s[MAX_LENGTH];    
    leLinha(s);



    return 0;
}

