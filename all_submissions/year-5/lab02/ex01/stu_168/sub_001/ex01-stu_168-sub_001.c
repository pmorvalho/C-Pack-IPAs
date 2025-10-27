
#include <stdio.h>

int main(){
    int maior,x, contador=1;
    scanf("%d",&maior);
    while(contador<3){
        scanf("%d",&x);
        if (x > maior)
            maior = x;
        contador++;
    }
    printf("%d\n",maior);
    return 0;
}