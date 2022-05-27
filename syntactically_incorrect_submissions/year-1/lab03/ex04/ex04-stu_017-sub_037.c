#include <stdio.h>

int main() {
    int c, anterior, contador_zeros = 0;


    while ((c = getchar()) != EOF) {
        if (c != '0') {
            putchar(c);
        }  
        else {
            while (1){
                anterior = c;
                c = getchar();
                if ((c != anterior) && (c != int)) {
                    putchar(anterior);
                    putchar(c);
                    break;
                } else if ((c != anterior) && (c == int)) {
                    putchar(c);
                    break;
                }
            }
        }
    }

    return 0;
}