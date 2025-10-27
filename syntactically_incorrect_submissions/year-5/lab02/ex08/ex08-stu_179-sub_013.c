
#include <stdio.h>

int main(){
    int n, cont = 0;
    scanf("%d", &n);

    float totalsoma = 0;

    while (cont < n){
        float num;
        scanf("%f", &num);
        totalsoma += num;
        cont ++;
    }
    
    float media = totalsoma / n; 
    printf("%.2f\n", media);
    return 0;
}