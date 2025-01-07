

#include <stdio.h>

int main() {
    
    int a, b, c;
    int aux;

    scanf("%d%d%d",&a,&b,&c);

    if (b < a) {
        aux = a;
        a = b;
        b = aux;
    }

    if (c < b) {
        aux = b;
        b = c;
        c = aux;

        if (b < a) {
            aux = a;
            a = b;
            b = aux;
        }
    }

    printf("%d %d %d\n",a,b,c);
    
    return 0;
}
