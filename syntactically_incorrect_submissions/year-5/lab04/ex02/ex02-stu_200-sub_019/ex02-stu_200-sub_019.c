
#include <stdio.h>

#define SIM 1
#define NAO 0
#define VECMAX 100
int main(){
    int cont = 0, lista[VECMAX], n=VECMAX+1, m,cont_c = 0, fim = NAO;
    while (n>VECMAX){
        scanf("%d",&n);
    }
    while (cont<n){
        scanf("%d",&m);
        lista[cont] = m;
        cont++;
    }
    while (1){
        cont = 0;
        fim = SIM;
        while(cont<n){
            if (lista[cont] != 0){
                printf("*");
                lista[cont]--;
                fim = NAO;
            }            
            else 
                printf(" ");
            cont++;
        }
        printf("\n");
        if (fim == SIM)
            break;
    }
    return 0;
}