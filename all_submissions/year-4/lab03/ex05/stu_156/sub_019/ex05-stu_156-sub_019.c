
#include <stdio.h>
#define DIM 100

int main(void) {
    int c, i;
    char s[DIM];
    c = getchar();
    
    
    for (i = 0; i < DIM-1 && c != EOF && c != '\n'; i++) {
        s[i] = c;
        c = getchar();
    }
    s[i] = '\0';
    printf("%s\n", s);
    return 0;
}