

#include <stdio.h>

#define MAX 100

int main() {
    char c, num1[MAX + 1], num2[MAX + 1];
    int i;
    for (i = 0; i < MAX && (c = getchar()) != ' ' && c != '\n'; i++)
        num1[i] = c;
    num1[i] = '\0';
    for (i = 0; i < MAX && (c = getchar()) != EOF && c != ' ' && c != '\n'; i++)
        num2[i] = c;
    num2[i] = '\0';
    i = 0;
    while (num1[i] != '\0') {
        if (num1[i] > num2[i]) {
            printf("%s\n", num1);
            return 0;
        }
        if (num1[i] < num2[i]) {
            printf("%s\n", num2);
            return 0;
        }
        i++;
    }
    printf("%s\n", num1);
    return 0;
}