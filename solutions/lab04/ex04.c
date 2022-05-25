#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 80
int is_pali(char s[]) {
    int j = strlen(s) - 1;
    int i = 0;
    while (i < j)
        if (s[i++] != s[j--]) return 0;
    return 1;
}

int main() {
    char s[MAX] = "";
    scanf("%s", s);
    printf("%s\n", is_pali(s) ? "yes" : "no");
    return EXIT_SUCCESS;
}
