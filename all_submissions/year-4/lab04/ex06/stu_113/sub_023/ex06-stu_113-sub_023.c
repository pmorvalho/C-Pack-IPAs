
#include <stdio.h>
#include <string.h>
#define MAX 80

void maiusculas (char s[]);
int leLinha(char s[]); 

int main () {
    char s[MAX];
    leLinha(s);
    maiusculas(s);
    printf("%s\n", s);
    return 0;
}

void maiusculas (char s[]) {
    int size = strlen(s) - 1, dif = 'a' - 'A';
    while (size--) {
        if (s[size] >= 'a' && s[size] <= 'z') 
            s[size] = s[size] - dif;
    }
}

int leLinha(char s[]) {
    int i = 0;
    char current = getchar();
    while (current != EOF && current != '\n') {
        s[i++] = current; current = getchar();
    }
    return i;
}
