

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 80

int read_line(char str[], int n) {
    int ch, i = 0;
    while ((ch = getchar()) != '\n') {
        if (i < n) {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}

int read_line2(char str[], int n) {
  
    fgets(str, n, stdin);
    int i = 0;
    while (str[i] != '\n' && str[i] != '\0') {
        i++;
    }
    str[i] = '\0';
    return i;
}

int main() {

    char str[MAX];
    int nr_chars = read_line2(str, MAX);
    if (nr_chars == 0) {
        printf("empty\n");
    } else {
        printf("%s\n", str);
    }

    return 0;
}