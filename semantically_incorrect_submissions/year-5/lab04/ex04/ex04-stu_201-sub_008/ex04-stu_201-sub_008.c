
#include <stdio.h>
#define MAX 80

int len(char s[]) {
    int i;
    for (i = 0; s[i] != '\0'; ++i);
    return i;
}

int main() {
    char s[MAX];
    int i, lenght;

    if (scanf("%s", s) != 1) return 1;

    lenght = len(s);
    for (i = 0; i < lenght / 2; ++i)
        if (s[i] != s[lenght - 1 - i]) {
            printf("no\n");
            return 0;
        }

    printf("yes\n");
    return 0;
}