#include <stdio.h>
 
int leLinha(char s[]);

#define DIM 80

int main() {

    char s[DIM];

    printf("%d\n", leLinha(s));
    printf("%s\n", s);

    return 0;
    }

int leLinha(char s[]) {

    int i = 0;
    char c;

    while ((c = getchar()) != '\n' && (c != EOF)) {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}