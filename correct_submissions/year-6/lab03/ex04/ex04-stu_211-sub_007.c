
#include <stdio.h>
int main () {
    int estado=0;
    int c=getchar();
    int proximo;
    while (c!= EOF) {
        if (c=='0' && estado ==0) {
            proximo=getchar();
            if (proximo==' '||proximo==EOF) {
                putchar(c);
            }
            if (proximo != EOF){
                ungetc(proximo,stdin);
            }
        }
        else if (c=='0' && estado != 0) {
            putchar(c);
        }
        else if (c!=' ' && c!='0'){
            putchar(c);
            estado++;
        }
        else if (c==' ') {
            putchar(c);
            estado=0;
        }
        c=getchar();
    }
    return 0;
}