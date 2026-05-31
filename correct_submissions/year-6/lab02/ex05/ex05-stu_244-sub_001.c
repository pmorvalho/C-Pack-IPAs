
#include <stdio.h>
int main(){
    int N, aux;
    aux = 1;
    scanf("%d", &N);
    while(N>=aux){
        printf("%d\n", aux);
        aux = aux + 1;
    }
    return 0;
}