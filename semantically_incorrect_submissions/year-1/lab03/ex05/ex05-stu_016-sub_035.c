#include <stdio.h>

int main() {
    int c, bar = 0, dentro = 0;
    while((c = getchar()) != EOF) {
        if(c == '"') {
            if(dentro) {
                if(bar) {
                    printf("%c", c);
                    bar = 0;
                }
                else {
                    dentro = 0;
                    printf("\n");
                }
            } else dentro = 1;
        } else if(c == '\\') {
            if(bar) printf("%c", c);
            else bar = 1;
        } else if(dentro) printf("%c", c);
    }
    return 0;
}
