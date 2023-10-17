
#include <stdio.h>
int main(){
    int maior, meio, min, n1, n2, n3;
    scanf("%d%d%d", &n1, &n2, &n3);

    maior = n1>n2 ? n1:n2;
    min = n1<n2 ? n1:n2;
    maior = n3>maior ? n3:maior;
    min = n3<min ? n3:min;

    if (n1 < maior && n1 > min)
        meio = n1;
    else if (n2 < maior && n2 > min)
        meio = n2;
    else
        meio = n3;
    
    printf("%d %d %d\n", min, meio, maior);
    return 0;
}