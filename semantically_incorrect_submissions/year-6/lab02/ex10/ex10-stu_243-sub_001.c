
#include <stdio.h>

int main(){
    int n, soma= 0, cont= 0;
    scanf("%d", &n);
    while (n > 0){
        soma += n % 10;
        cont++; 
        n = n/10;  
    }
    printf ("%d\n%d", cont, soma);
    return 0;   
}