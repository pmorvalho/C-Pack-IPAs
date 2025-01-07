

#include <stdio.h>

int main(){

    int  num[3], counter, maior, menor, meio;
    scanf("%d%d%d", &num[0], &num[1], &num[2]);

    maior = num[0];
    menor = num[0];
    

    for (counter = 1; counter <3; counter++){
        if (num[counter] > maior)
            maior = num[counter]; 
    
        if (num[counter] < menor)
            menor = num[counter]; 
    }
 
    
    for (counter = 0; counter<3 ;counter++){
        if (num[counter]!= maior && num[counter]!= menor)
            meio = num[counter];
    }
    
    printf("%d %d %d\n", menor, meio, maior);
  
    return 0;
}