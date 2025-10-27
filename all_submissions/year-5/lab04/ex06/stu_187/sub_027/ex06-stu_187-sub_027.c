

#include <stdio.h>
#include <string.h>

#define MAX 100

int Lelinha(char s[]) {
    int i = 0;
    char c;

    while((c= getchar()) != '\n' && c != EOF) {
        s[i] = c;
        i++;
        
    }
    s[i] = '\0';
    return 0;
}

void maiusculas(char s[]) {
    int i = 0;

    while (s[i] != '\0') {
        if (s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] - ('a' - 'A');
        }
        i++;
    }
}


int main() {
    char str[MAX];

    Lelinha(str);
    maiusculas(str);
    printf("%s\n", str);

    return 0;
}