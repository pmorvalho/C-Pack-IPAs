

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX 80


void switch_case(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
}


bool has_newline(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            return true;
        }
    }
    return false;
}

int main() {

    char str[MAX];

    fgets(str, MAX, stdin);
    switch_case(str);

    if (has_newline(str)) {
        printf("%s", str);
    } else {
        printf("%s\n", str);
    }

    return 0;
}