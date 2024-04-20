
#include <stdio.h>
int main(){
    int maior, meio, min, n1, n2, n3;
    int m, n;
    scanf("%d %d %d", &n1, &n2, &n3);

    m = n1 > n2 ? n1 : n2;
    n = n1 < n2 ? n1 : n2;
    maior = m > n3 ? m : n3;
    meio = m > n3 && n < n3 ? n3 : (m < n3) && (m == n1) ? n1 : n2 ;
    min = n < n3 ? n : n3;
    

    printf("%d %d %d\n", min, meio, maior);
    return 0;
}
