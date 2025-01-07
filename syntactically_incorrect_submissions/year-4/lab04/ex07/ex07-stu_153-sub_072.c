
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX 80


void remove_char(char str[], char c) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            for (int j = i; str[j] != '\0'; j++) {
                str[j] = str[j + 1];
            }
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
    char c;

    fgets(str, MAX, stdin);
    scanf("%c", &c);

    remove_char(str, c);

    if (has_newline(str)) {
        printf("%s", str);
    } else {
        printf("%s\n", str);
    }

    return 0;
}