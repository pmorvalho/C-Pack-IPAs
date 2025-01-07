
#include <stdio.h>

enum states {OUT, IN, BACKSLASH};

int main() {
    char current;
    enum states state = OUT;
    while ((current = getchar()) != EOF){
        switch (state) {
            case OUT:
                if (current == '"') state = IN;
                break;
            case IN:
                if (current == '"') {
                    state = OUT;
                    putchar('\n');
                } else if (current == '\\') {
                    state = BACKSLASH;
                } else putchar(current);
                break;
            case BACKSLASH:
                putchar(current);
                state = IN;
                break;
        }
    }
    return 0;
}
