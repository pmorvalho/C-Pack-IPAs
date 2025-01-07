
#include <stdio.h>
#include <string.h>

#define ASPAS 0
#define BACKSLASH 1
#define CHAR 2

int main() {
    int current = ASPAS;
    int current_status;

    while ((current_status = getchar()) != EOF) {
        if (current == ASPAS) {
            if (current_status == '"') {
                current = CHAR;
            }
        } else if (current == CHAR) {
            if (current_status == '"') {
                current = ASPAS;
                putchar('\n');
            } else if (current_status == '\\') {
                current = BACKSLASH;
            } else {
                putchar(current_status);
            }
        } else if (current == BACKSLASH) {
            putchar(current_status);
            current = CHAR;
        }
    }

    return 0;
}
