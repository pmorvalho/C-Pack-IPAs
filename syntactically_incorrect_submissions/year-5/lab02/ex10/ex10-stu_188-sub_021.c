
#include <stdio.h>
int main(){
    int N,num_digitos=0,soma=0;
    scanf("%d",&N);
    int digitos=N;
    while (digitos>0){
        int digito=digitos%10; 
        soma+=digito; 
        digitos=digitos/10; 
        num_digitos++; 
    }
    printf("%d\n%d\n",num_digitos,soma);
    return 0; 
} 