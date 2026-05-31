
 
#include <stdio.h>

int main () {
    float soma=0, valor, media;
    int n, i=1;
    
    scanf("%d", &n);
    while (i<=n) { 
        scanf("%f", &valor);
        soma = soma + valor; 
        i++;
    }
media= soma/n;
printf("%.2f\n",media);
return 0;
}