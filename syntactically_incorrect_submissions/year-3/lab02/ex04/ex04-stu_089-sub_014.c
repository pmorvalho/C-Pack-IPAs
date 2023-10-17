
#include <stdio.h>

int main()
{
    int n [3];
    int i = 0;
    int aux;

    while(i <= 2){
        scanf("%d", &n[i]);
        i++;
    }

    int ordenado = 0;
    while(!ordenado){
        ordenado = 1;
        for(i=0; i < 2; i++){
            if(n[i] > n[i+1]){
                aux = n[i+1];
                n[i+1]= n[i];
                n[i] = aux;
                ordenado = 0;
            }
        }
    }

    for(i=0; i <= 2; i ++){
        printf("%d ", n[i]);
    }
    return 0;
}