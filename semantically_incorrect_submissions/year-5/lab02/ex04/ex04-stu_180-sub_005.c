
#include <stdio.h>

int main(){
    int contador=1, num, meio=0,menor=0,maior=0;
    scanf("%d", &num);
    maior=num; 
    menor=num; 
    meio=num; 
    while (contador<3){
        
        scanf("%d", &num);
        if (maior<num){ 
            maior=num; 
        }
        if (menor>num){ 
            menor=num; 
        }
        else{
            meio=num;
        }
        contador ++;
    }

    printf("%d\t%d\t%d\n", menor,meio,maior);
    return 0;
}
