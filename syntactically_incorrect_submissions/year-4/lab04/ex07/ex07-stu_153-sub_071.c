
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX 80


void remove_char(char str[], char c) {
    int i = 0;
    int j = 0;
    while (str[i] != '\0') {
        if (str[i] != c) {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
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