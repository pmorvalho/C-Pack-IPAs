
#include <stdio.h>

int main() {
    int v, divisor, counter=0;
    scanf("%d", &v);

    for (divisor=v; divisor>0; --divisor){
        if (v%divisor==0){
            ++counter; 
        }
    }
    printf("%d\n", counter);
    return 0;
}