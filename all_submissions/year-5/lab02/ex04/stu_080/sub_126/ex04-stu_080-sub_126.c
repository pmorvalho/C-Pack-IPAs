
#include <stdio.h>

int main(){ 
    int n1, n2, n3, aux = 0;
    scanf("%d %d %d", &n1, &n2, &n3);

    aux = (aux < n1 && n1 > n2 && n1 > n3) ? n1 : n2; 
    if (aux == n1){
        printf("%d %d %d\n", n2 < n3 ? n2 : n3, n2 < n3 ? n3 : n2, aux);
        return 0;
    }
    aux = aux < n3 ? n3 : aux; 
    if (aux == n2){
        printf("%d %d %d\n", n1 < n3 ? n1 : n3, n1 < n3 ? n3 : n1, aux);
        return 0;
    }
    printf("%d %d %d\n",n1 < n2 ? n1 : n2, n1 < n2 ? n2 : n1, aux);
    return 0;
}