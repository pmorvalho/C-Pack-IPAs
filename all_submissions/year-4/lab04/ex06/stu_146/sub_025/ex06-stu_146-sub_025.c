

#include <stdio.h>
#define MAX 1000

void maiusculas(char s[]) {
    char c;
    int i = 0;

    while ((c = getchar()) != EOF && c != '\n') { 
        if (c >= 'a' && c <= 'z') 
            s[i] = c - 32;
        else s[i] = c;
        i++;   
    }
    s[i] = '\0';
}

int main() {
    char s[MAX];
    maiusculas(s);
    printf("%s\n", s);
    return 0;
}