

#include <stdio.h>
#include <string.h>

#define MAX 100

int lenumero(char s[]) {
    int i = 0;
    char c;
    while ((c = getchar()) != EOF && c != '\n' && c != ' ') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

int main () {
    char s1[MAX], s2[MAX];
    lenumero(s1);
    lenumero(s2);
    if (strcmp(s1,s2) > 0)
        printf("%s\n",s1);
    else
        printf("%s\n",s2);
    return 0;
}