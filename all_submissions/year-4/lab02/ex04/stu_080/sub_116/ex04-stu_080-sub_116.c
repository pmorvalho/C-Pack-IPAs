

#include <stdio.h>

int main(){
    int n1,n2,n3, aux, aux2, aux3;
    scanf("%d %d %d", &n1, &n2, &n3);

    aux = (n1 <= n2 ? n1 : n2);
    aux = aux <= n3 ? aux : n3;
    aux3 = n1 >= n2 ? n1 : n2;
    aux3 = aux3 >= n3 ? aux3 : n3;
    aux2 = (n1 + n2 + n3) - aux - aux3;

    printf("%d %d %d\n", aux, aux2, aux3);
    return 0;
}