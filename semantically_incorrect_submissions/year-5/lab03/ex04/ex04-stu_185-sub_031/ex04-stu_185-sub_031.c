
#include <stdio.h>
int main(){
    char c;
    int isprintnum = 0, isin = 0;
    while((c = getchar()) != EOF){
        if (c  == '0'){
            if (isprintnum == 0 && isin == 0) continue;
            putchar('0');
        } else if (c >= '1' && c <= '9'){
            putchar(c);
            isprintnum = 1;
            isin = 1;
        } else if (c == ' ' || c == '\n'){
            if (isprintnum != 1) putchar('0');
            isprintnum = 0;
            isin = 0;
            putchar(c);
        }
    }
    return 0;
}