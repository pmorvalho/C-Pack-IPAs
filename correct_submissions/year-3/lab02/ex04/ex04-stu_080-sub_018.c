
#include <stdio.h>
int main(){
    int maior, meio, minimo, n1, n2, n3;
    scanf("%d%d%d", &n1, &n2, &n3);

    maior = n1>n2 ? n1:n2;
    minimo = n1<n2 ? n1:n2;
    maior = n3>maior ? n3:maior;
    minimo = n3<minimo ? n3:minimo;

    if (n1 < maior && n1 > minimo)
        meio = n1;
    else if (n2 < maior && n2 > minimo)
        meio = n2;
    else
        meio = n3;
    
    printf("%d %d %d\n", minimo, meio, maior);
    return 0;
}