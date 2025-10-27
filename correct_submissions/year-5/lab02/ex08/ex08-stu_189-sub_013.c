
#include <stdio.h>

int main(){
    float soma = 0.0, x;
    int div, rep;
    scanf("%d",&div);
    rep = div;
    while (rep--){
        scanf ("%f",&x);
        soma += x;
    }
    soma = soma/(float)div;
    printf ("%.2f\n",soma);
    return 0;
}