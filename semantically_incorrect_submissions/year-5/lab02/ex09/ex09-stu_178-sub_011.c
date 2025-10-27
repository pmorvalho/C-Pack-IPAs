
#include <stdio.h>

int main(){
    int N, hora, minuto, segundo;
    scanf("%d", &N);
    minuto= N/60;
    hora = minuto/60;
    minuto -= hora*60;
    segundo = N - (minuto*60) - (hora*3600);
    printf("%d:%d:%d\n", hora, minuto, segundo);
    return 0;
}