
#include <stdio.h>
#include <string.h>

int lelinha(char s[]) {
    int len;
    len = strlen(s);
    return len;
}

int main() {
    int len;
    char s[100];  

    
    scanf("%99[^\n]", s); 

    len = lelinha(s);

    for (int i = 0; i < len; i++) {
        printf("%c", s[i]);
    }
    printf("\n");

    return 0;
}
