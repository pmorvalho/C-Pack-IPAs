

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 80


void switch_case(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
}

int main() {

    int len = 0;
    char str[MAX];
    fgets(str, MAX, stdin);
    str[strlen(str) - 1] = '\0';
    switch_case(str);
    printf("%s", str);

    return 0;
}