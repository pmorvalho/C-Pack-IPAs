
#include <stdio.h>
void leLinha(char s[]){
   int i = 0, j;
    char pal;
    while (scanf("%c", &pal) == 1 && pal != '\n') {
        s[i] = pal;
        i++;
    }
    s[i] = '\0';
    for (j = 0; j < i; j++) {
        printf("%c", s[j]);
    }
}

int main() {
    char s[100];
    leLinha(s);
    return 0;
}

