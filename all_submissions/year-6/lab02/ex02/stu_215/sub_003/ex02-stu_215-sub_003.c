


#include <stdio.h>  
int main(){
    int n1, n2, maior, menor;
    scanf("%d%d", &n1, &n2);
    maior = n1;
    menor = n1;
    if (n2 > maior){
        maior = n2;
        menor = n1;
    }
    if (n2 < maior){
        maior = n1;
        menor = n2;
    }
    printf("%d\n%d\n", menor, maior);   
}