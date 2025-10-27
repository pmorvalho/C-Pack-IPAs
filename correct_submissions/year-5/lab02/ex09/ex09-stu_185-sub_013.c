
#include <stdio.h>
int main(){
    int N, segundo, minuto, hora;
    scanf("%d", &N);
    hora = N / 3600;
    minuto = (N % 3600) / 60;
    segundo = (N % 3600) % 60;
    printf("%02d:%02d:%02d\n", hora, minuto, segundo);
    return 0;
}