
#include <stdio.h>
#include <string.h>

#define BUFFER 100

int leLinha(char s[BUFFER]);

int main() {

    char string[BUFFER];
    int n = leLinha(string);
    int i;
    for (i = 0; i < n; i++) {
        printf("%c", string[i]);
    }

    return 0;

}

int leLinha(char s[BUFFER]) {

    char c;
    int j = 0;

    while ((c = getchar()) != EOF) {

        if (c == '\n') {
            s[j] = c;
            break;
        }
        s[j] = c;
        j++; 
    }

    return j;
}