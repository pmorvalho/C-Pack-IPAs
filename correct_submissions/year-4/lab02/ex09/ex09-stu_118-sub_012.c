
#include <stdio.h>

int main(){
    int segundos;
    scanf("%d", &segundos);
    printf("%02d:%02d:%02d\n", segundos/3600, (segundos%3600)/60, segundos%60);
    return 0;
}