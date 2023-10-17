
#include <stdio.h>
int main(){
    int maior, meio, min, n1, n2, n3;
    int m, n;
    scanf("%d %d %d", &n1, &n2, &n3);

    m = n1 > n2 ? n1 : n2;
    n = n1 < n2 ? n1 : n2;
    if ((m > n3) && (n < n3)){
        meio = n3;
        maior = m;
        min = n;
    }
    else{
        if ((m > n3) && (n > n3)){
            maior = m;
            meio = n;
            min = n3;
        }
        else{
            maior = n3;
            meio = m;
            min = n;
        }
    }
    printf("%d\t%d\t%d\n", min, meio, maior);
    return 0;
}