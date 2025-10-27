
#include <stdio.h>

int main(){
    int q, contador = 0;
    scanf("%d",&q);
    float som = 0, n = q;
    while (contador++ < q){
        scanf("%f",&n);
        som = som + n;
    }
    printf("%f",som/q);
    return 0;
}