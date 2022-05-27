#include <stdio.h>

int main() {
    int c, anterior;


    while ((c = getchar()) != EOF) {
        if (c != '0') {
            putchar(c);
        }  
        else {
            while (1){
                anterior = c;
                c = getchar();
                if ((c != anterior) && (c < '1') && (c > '9'))) {
                    putchar(anterior);
                    putchar(c);
                    break;
                } else if ((c != anterior) && ('1' < c) && (c < '9')) {
                    putchar(c);
                    break;
                }
            }
        }
    }

    return 0;
}