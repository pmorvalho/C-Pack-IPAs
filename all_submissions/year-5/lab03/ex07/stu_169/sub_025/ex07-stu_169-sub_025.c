

#include <stdio.h>
#define EXPRESSAO 100

int main() {
    char c, seq[EXPRESSAO];
    int i = 0, res = 0, num = 0, sinal = 1; 

    while (i < (EXPRESSAO - 1) && (c = getchar()) != '\n')
        seq[i++] = c;

    seq[i] = '\0';

    for (i = 0; seq[i] != '\0'; i++) {
        if (seq[i] >= '0' && seq[i] <= '9')
            num = num * 10 + (seq[i] - '0'); 

        else if (seq[i] == '-') {
            res = res + num * sinal;
            num = 0;
            sinal = -1;
            }
        
        else if (seq[i] == '+') {
            res = res + num * sinal;
            num = 0;
            sinal = 1;
        }
    }

    res = res + num * sinal; 
    printf("%d\n", res);
    return 0;
}