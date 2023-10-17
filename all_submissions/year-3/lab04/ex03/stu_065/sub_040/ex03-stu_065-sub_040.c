
#include <stdio.h>
#define VECMAX 100

int main(){
    int n, cont1, cont2, max = 0, valores[VECMAX];
    scanf("%d", &n);
    while(n>=100){
        scanf("%d", &n);
    }
    for (cont1 = 0; cont1 < n; cont1++){
        scanf("%d", &valores[cont1]);
        if (valores[cont1] > max) 
            max= valores[cont1];
    }
    
    for (cont1 = max-1; cont1 >= 0; cont1--){
        for (cont2 = 0; cont2 < n; cont2++){
            if (valores[cont2] > cont1)
                printf("*");
            else
                printf(" ");    
        } 
        printf("\n");
    }
    return 0;


}