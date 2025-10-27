
#include <stdio.h>

int main(){
    int numero, x, d = 0;
    scanf("%d",&numero);
    for (x=1;x<=numero;x++){
        if (numero%x==0){
            d++;
        }
    }
printf("%d",d);
return 0;
}