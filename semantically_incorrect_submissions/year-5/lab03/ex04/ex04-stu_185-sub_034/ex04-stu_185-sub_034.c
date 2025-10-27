
#include <stdio.h>
int main(){
    char c;
    int n = 0, isprintnum = 0, isin = 0;
    while((c = getchar()) != EOF){
        
        if (n == 0){
            if (c == '0') isin = 1;
            n = 1;
        }

        if (c  == '0'){
            if (isprintnum == 0 && isin == 1) continue;
            else putchar('0');
        } else if (c >= '1' && c <= '9'){
            putchar(c);
            isprintnum = 1;
            isin = 0;
        } else if (c == ' ' || c == '\n'){
            if (isprintnum != 1) putchar('0');
            isprintnum = 0;
            isin = 1;
            putchar(c);
        }
    }
    return 0;
}