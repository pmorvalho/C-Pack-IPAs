

#include <stdio.h>

#define DIM 100

void printInt(int n[], int len) {
    int i;
    for (i = 0; i < len; i++) {
        printf("%c", n[i]);
    }
    putchar('\n');
}

int main() {
    int n1[DIM], n2[DIM], c, i = 0, len;
    while ((c = getchar()) != ' ' && c != '\n' && c != '\0') {
        n1[i] = c;
        i++;
    }
    len = i;
    i = 0;
    while ((c = getchar()) != ' ' && c != '\n' && c != '\0') {
        n2[i] = c;
        i++;
    }
    for (i = 0; i < len; i++) {
        if (n1[i] > n2[i]) {
            printInt(n1, len);
            break;
        }
        else if (n2[i] > n1[i]) {
            printInt(n2, len);
            break;
        }
    }
    return 0;
}
