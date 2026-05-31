


#include <stdio.h>  
int main(){
    int num, divisores=0, dividir_por;
    scanf("%d", &num);
    dividir_por = num;
    while (dividir_por != 0){
        if (num%dividir_por==0)
            divisores += 1;
        dividir_por -= 1;
    }
    printf("%d\n",divisores);
    return 0;
}
