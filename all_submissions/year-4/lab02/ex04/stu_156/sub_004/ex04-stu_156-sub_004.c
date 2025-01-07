
#include <stdio.h>

int main(void){

    int n1,n2,n3;
    int menor,intermedio,maior;
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    if(n1 <= n2){
        if(n1 <= n3){
            menor = n1;
            if(n2 <= n3){
                intermedio = n2;
                maior = n3;
            }
            else{
                maior = n2;
                intermedio = n3;
            }
        }
        else{
            maior = n2;
            intermedio = n1;
            menor = n3;
        }
    }
    else{
        if(n1 >= n3){
            maior = n1;
            if(n2 <= n3){
                menor = n2;
                intermedio = n3;
            }
            else{
                intermedio = n2;
                menor = n3;
            }
        }
        else{
            maior = n3;
            intermedio = n1;
            menor = n2;
        }
    }

    printf("%d %d %d\n",menor,intermedio,maior);
    return 0;
}