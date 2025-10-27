
#include <stdio.h>

int main(){
    int n , maior = 0, cont = 0, m,lista[100];
    scanf("%d",&n);
    while (cont<n){
        scanf("%d",&m);
        if (m>maior)
            maior = m;
        lista[cont] = m;
        cont++;
    }
    cont = 0;
    while (maior>0){
        cont =0;
        while (cont<n){
            if (lista[cont] == maior){
                printf("*");
                lista[cont]--;
            }
            else
                printf(" ");
            cont++;
        }
        maior--;
        printf("\n");
    }

}