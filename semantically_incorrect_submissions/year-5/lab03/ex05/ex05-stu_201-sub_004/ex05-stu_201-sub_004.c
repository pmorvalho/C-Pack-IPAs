
#include <stdio.h>

int main() {
    int c, is_inside = 0, has_escape = 0;

    while ((c = getchar()) != EOF) {
        if (c == '"' && !has_escape) {
            if (is_inside) putchar('\n');
            is_inside = !is_inside;
        } else if (c == '\\' && !has_escape)
            has_escape = 1;
        else if (is_inside)
            putchar(c);
    }

    return 0;
}