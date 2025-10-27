

#include <stdio.h>
#include <string.h>

#define MAX 80

int leLinha(char s[]);

int main() {
    char s[MAX];

    leLinha(s);
    return 0;
}

int leLinha(char s[]) {
    int len, c, i = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\0')
            break;
        s[i] = c;
        i++;
    }
    
    printf("%s\n", s);

    len = strlen(s);
    return len;
}