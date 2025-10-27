
#include <stdio.h>

int main() {
    char n;
    n = getchar();
    while(n != EOF) {
        if(n == '\"') {
            n = getchar();
            while(n != '\"') {
                if(n == '\\') {
                    (n == '\\') ? putchar('\\') : putchar(n);
                }
                n = getchar();
            }
            if(n == '\"') {
                n = getchar();
                if(n == EOF || n == '\n') {
                    printf("\n");
                } else if(n == ' ') {
                printf("\n");
                } else {
                    printf("\"");
                    while(n != '\"') {
                        if(n == '\\') {
                            n = getchar();
                            (n == '\\') ? printf("\\") : putchar(n);
                        } else {
                            putchar(n);
                        }
                        n = getchar();
                    }
                    if(n == '\"') {
                        printf("\"");
                        n = getchar();
                    }
                    while(n != '\"') {
                        if(n == '\\') {
                            n = getchar();
                            (n == '\\') ? printf("\\") : putchar(n);
                        } else {
                            putchar(n);
                        }
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