
#include <stdio.h>
#include <string.h>

int lelinha(char s[]) {
    return strlen(s);
}

int main() {
    char s[100], c;
    int i = 0;

    while ((c = getchar()) != '\n' && c != EOF) {
        s[i++] = c;
    }

    int len = lelinha(s);
    for(int i = 0; i < len; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 'a' + 'A';
            printf("%c", s[i]);
        } else {
            printf("%c", s[i]);
        }
    }
    printf("\n");
    return 0;
}