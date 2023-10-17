
#include <stdio.h>
#define true 1
#define false 0

void handle_char(int c, int *escaped, int *open_aspas) {
    switch (c) {
        case '"':
            if (*escaped) {
                putchar(c);
                *escaped = false;
            } else {
                if (*open_aspas) {
                    putchar('\n');
                    *open_aspas = false;
                } else {
                    *open_aspas = true;
                }
            }
            break;
        case '\\':
            if (*escaped) {
                putchar(c);
                *escaped = false;
            } else {
                *escaped = true;
            }
            break;
        default:
            if (*open_aspas)
                putchar(c);
    } 
}

int main() {
    int c, escaped = false, open_aspas = false;
    while ((c = getchar()) != EOF) {
        handle_char(c, &escaped, &open_aspas);
    }
    return 0;
}