
#include <stdio.h>

int main() {
    char n;
    n = getchar();
    while(n != EOF) {
        if(n == '\"') {
            n = getchar();
            while(n != '\"') {
                (n == '\\') ? putchar('\\') : putchar(n);
                n = getchar();
            }
            if(n == '\"') {
                n = getchar();
                if(n == EOF || n == '\n') {
                    printf("\n");
                } else if(n == ' ') {
                printf("\n");
                } else {
                    printf("%c", '"');
                    while(n != '\"') {
                        (n == '\\') ? printf("%c", '\\') : putchar(n);
                        n = getchar();
                    }
                    if(n == '\"') {
                        printf("%c", '"');
                        n = getchar();
                    }
                    while(n != '\"') {
                        (n == '\\') ? printf("%c", '\\') : putchar(n);
                        n = getchar();
                    }
                    if(n == '\"') {
                        printf("\n");
                    }    
                }
            }
        }
        n = getchar();
    }
    return 0;
}