
#include <stdio.h>
#include <string.h>

#define MAX 80

int main () {
    char s[MAX];
    int i = 0, size, timesToCompare;

    scanf("%s", s);
    size = strlen(s); timesToCompare = size / 2;

    while (i < timesToCompare && s[i] == s[size - 1 - i]) i++;

    printf("%s\n", i == timesToCompare ? "yes" : "no");

    return 0;
}
