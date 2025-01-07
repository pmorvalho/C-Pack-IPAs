
#include <stdio.h>
#define MAX 80

void readnumber(char n[]);

int main() {
    char n1[MAX], n2[MAX];

    readnumber(n1);
    readnumber(n2);

    for (int i = 0; n1[i] != '\0'; ++i) {
        if (n1[i] > n2[i]) {
            printf("%s\n", n1);
            break;
        } else if (n1[i] < n2[i]) {
            printf("%s\n", n2);
            break;
        }
    }

    return 0;
}

void readnumber(char n[]) {
    char c;
    int i = 0;

    while ((c = getchar()) != ' ' && c != '\n' && c != '\0')
        n[i++] = c;
}