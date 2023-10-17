
#include <stdio.h>

int main(){
    int n, soma, contador;
    soma=0;
    contador=1;
    scanf("%d",&n);
    if (n<10)
    {
        printf("1\n%d\n",n);
    }
    else{
        do{
            contador++;
            soma=soma+n%10;
            n=(n-(n%10))/10;
        }while(n>=10);
        soma=soma+n;
        printf("%d\n%d\n",contador,soma);
    }
    return 0;
}