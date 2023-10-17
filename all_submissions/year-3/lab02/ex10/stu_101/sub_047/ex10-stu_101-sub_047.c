

#include <stdio.h>

int main(){
    int n,copia,i,digitos=0,soma=0;
    scanf("%d", &n);
    copia = n;
    while(copia>=1){
        copia = copia/10;
        digitos++;
    }
    for(i=1; i<=digitos; i++){
        soma=soma+n%10;
        n=n/10;
    }
    printf("%d\n%d\n",digitos,soma);
    return 0;
}
