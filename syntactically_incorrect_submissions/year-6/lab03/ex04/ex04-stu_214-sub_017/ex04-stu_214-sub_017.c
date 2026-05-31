
#include <stdio.h>
int main(){
    int c, a_ler_numero = 0, imprimiu_algo = 0;

    while ((c = getchar()) != EOF) {

        if (c >= '0' && c <= '9') {
            a_ler_numero = 1;

            if (c == '0') {
                if (imprimiu_algo == 1) {
                    putchar(c);
                }
            } else {
                putchar(c);
                imprimiu_algo = 1;
            }
        }

        else {

            if (a_ler_numero == 1 && imprimiu_algo == 0) {
                putchar('0');
            }

            putchar(c);

            a_ler_numero = 0;
            imprimiu_algo = 0;
        }
    }

}