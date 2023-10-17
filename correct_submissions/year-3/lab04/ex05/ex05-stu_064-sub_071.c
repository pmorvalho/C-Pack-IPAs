

#include <stdio.h>
#define MAX 80

int leLinha(char str[]) {
    int i = 0, c;
    while ((c = getchar()) != EOF && c != '\n')
        str[i++] = c;
    str[i] = '\0';
    return i;
}

int main() {
    char str[MAX];
    leLinha(str);
    printf("%s\n", str);
    return 0;
}