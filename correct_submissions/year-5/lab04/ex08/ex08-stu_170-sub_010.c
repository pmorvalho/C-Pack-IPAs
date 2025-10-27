
#include <stdio.h>
#define MAX 100

void printnumero(int n[], int len);
int lenumero(int n[]);

int main() {
    int n1[MAX], n2[MAX], i = 0, len;

    char c = getchar();
    while (c != ' ') {
        n1[i++] = c - '0';
        c = getchar();
    }
    len = i, i = 0;

    c = getchar();
    while (c != '\n' && c != EOF) {
        n2[i++] = c - '0';
        c = getchar();
    }

    for (i = 0; n1[i] == n2[i]; i++);
    if (n1[i] > n2[i])
        printnumero(n1, len);
    else if (n1[i] < n2[i])
        printnumero(n2, len);


    return 0;
}

void printnumero(int n[], int len) {
    int i;
    for (i = 0; i < len; i++) {
        putchar(n[i] + '0');
    }
    putchar('\n');
}


