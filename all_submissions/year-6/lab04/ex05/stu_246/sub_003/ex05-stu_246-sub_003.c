
#include <stdio.h>
#define MAX 80

int leLinha(char s[]);
int leLinha(char s[]) {
    int c, i=0;
    while ((c=getchar()) !=EOF && c != "\n") {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

int main() {
    char input[MAX];
    leLinha(input);
    printf("%s", input);
    return 0;
}