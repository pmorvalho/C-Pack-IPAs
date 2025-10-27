
#include <stdio.h>

int main() {
    int n1,n2,n3,aux;
    scanf("%d %d %d", &n1, &n2,& n3);
    if (n1>n2) {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    if (n3 < n1) printf("%d %d %d",n3,n1,n2);
    else if (n3 > n2) printf("%d %d %d",n1,n2,n3);
    else printf("%d %d %d",n1,n3,n2);
    return 0;
}