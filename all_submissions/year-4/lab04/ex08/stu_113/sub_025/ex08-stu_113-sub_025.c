
#include <stdio.h>
#include <string.h>
#define MAX 100

int leLinha (char s[]);

int main () {
    char num1[MAX], num2[MAX];
    int size, i = 0;
    leLinha(num1);
    leLinha(num2);
    size = strlen(num1);
    while (size - (i++) && num1[i] == num2[i])
        ;
    printf("%s", num1[i] > num2[i] ? num1 : num2);
}

int leLinha (char s[]) {
    int i = 0;
    char current = getchar();
    while (current != EOF && current != ' ') {
        s[i++] = current; current = getchar();
    }
    return i;
}
