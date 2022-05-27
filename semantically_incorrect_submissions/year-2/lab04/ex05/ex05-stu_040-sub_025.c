#include <stdio.h>
#define MAX 80

int leLinha(char s[]) {
    int i =0, c;

    while((c=getchar()) != EOF && c!= '\n')
        s[i++] =c;
    s[i] = '\0';

    return i;
}


int main() {
    char s[MAX];

    leLinha(s);
    printf("%s", s);

    return 0;
}