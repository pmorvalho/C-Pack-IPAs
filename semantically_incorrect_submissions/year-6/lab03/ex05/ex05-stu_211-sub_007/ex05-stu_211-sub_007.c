
#include <stdio.h>
int main() {
    int c=getchar();
    int estado=0;
    while (c!=EOF) {
        if (c==' ' && estado==0) {
            printf("\n");
        }
        else if (c!='"'){
            printf("%c",c);
            estado++;
        }
        else if (c=='"') {
            estado=0;
        }
        c=getchar();
    }
    return 0;
}