
#include <stdio.h>
int main (){
    int numero,resto,soma=0,quantidade=0;
    scanf("%d",&numero);
    while (numero>0){
        resto=numero%10;
        numero=numero/10;
        soma+=resto;
        quantidade+=1;
    }
    printf("%d\n%d\n",quantidade,soma);
    return 0;
}