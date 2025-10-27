
#include <stdio.h>

int main(){
    int N, hora, minuto, segundo;
    scanf("%d", &N);
    minuto= N/60;
    hora = minuto/60;
    minuto -= hora*60;
    segundo = N - (minuto*60) - (hora*3600);
    if (hora < 10){
        printf("0%d:", hora);
    }
    else{
        printf("%d", hora);
    }
    if (minuto < 10){
        printf("0%d:", minuto);
    }
    else{
        printf("%d", minuto);
    }
    if (segundo < 10){
        printf("0%d\n", segundo);
    }
    else{
        printf("%d\n", segundo);
    }
    return 0;
}