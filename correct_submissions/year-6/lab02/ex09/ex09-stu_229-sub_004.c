
#include <stdio.h>

int main(){
    int n, minuto, hora, segundo;
    
    scanf("%d", &n);
    hora = 0;
    while(n >= 3600){
        n -= 3600;
        hora++;
    }
    minuto = n / 60;
    segundo = n % 60;
    printf("%02d:%02d:%02d\n", hora, minuto, segundo);
    return 0;
}