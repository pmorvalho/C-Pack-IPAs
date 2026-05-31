
#include <stdio.h>
int main(){
    int a, b, c, aux;
    scanf("%d%d%d", &a, &b, &c);
    if (b<a){
        aux =a;
        a=b;
        b=aux;
    }
    if (c<a)
    printf("%d %d %d\n", c, a , b);
    else if (c<b)
    printf("%d %d %d\n", a, c, b);
    else
    printf("%d %d %d\n", a, b, c);
    return 0;
}