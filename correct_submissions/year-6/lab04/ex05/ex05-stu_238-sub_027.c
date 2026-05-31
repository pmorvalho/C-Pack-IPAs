#include <stdio.h>
#include <string.h>


#define MAX 81


int leLinha(char s[]) {
    int i = 0; 
    int c;

    while ((c = getchar()) != EOF && c != '\n') {
        
        if (i < MAX - 1) {
            s[i++] = (char)c;
        }
    }

    s[i] = '\0';
    return i;
}

int main() {
    char linha[MAX];
    
    
    leLinha(linha);
    printf("%s\n", linha);
    
    return 0;
}