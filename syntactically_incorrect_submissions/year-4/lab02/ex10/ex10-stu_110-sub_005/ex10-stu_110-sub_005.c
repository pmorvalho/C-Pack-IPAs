
#include <stdio.h>
int main(){
    int Num;
    int Soma;
    int Digitos;
    Digitos=0;
    Soma=0;
    int UltimoDigito;
    scanf("%d",&Num);
    while (Num>0)
    {
        UltimoDigito=Num%10;
        Digitos=Digitos+1;
        Soma=Soma+UltimoDigito;
        Num=Num-UltimoDigito;
        Num=Num/10;



    }
    printf("%d\n%d\n",Digitos,Soma);
return 0;


}