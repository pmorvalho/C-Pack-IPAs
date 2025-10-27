
#include <stdio.h>

#define VECMAX 100
int main(){
    int n = VECMAX+1, cont = 0, lista[VECMAX], m;
    while (n>VECMAX){
        scanf("%d", &n);
    }
    while (cont<n){
        scanf("%d",&m);
        lista[cont] = m;
        cont++;
    }
    cont = 0;
    while (cont<n){
        int cont_e = 0;
        while (cont_e<lista[cont]){
            printf("*");
            cont_e++;
        }
        printf("\n");
        cont++;
    }
    return 0;
}