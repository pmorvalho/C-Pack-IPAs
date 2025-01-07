

#include <stdio.h>
#include <string.h>
#define MAX 80

int lelinha(char s[]) {
    int i = 0;
    char c;
    while ((c = getchar())!= '\n' && c!= EOF) {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}
void maisculas(char s[]) {
    int i;
    int length = strlen(s);
    
   for (i = 0; i < length; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 32;
        }
    }

}
int main() {
    char palavra[MAX];
    char linha[MAX];
    int i;
    
    int numCarateres = lelinha(linha);
    for (i = 0; i < numCarateres; i++) {
        palavra[i] = linha[i];
    }
    maisculas(palavra);

    printf("%s\n", palavra);

    return 0;
}

