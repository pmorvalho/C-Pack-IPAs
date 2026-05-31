
#include <stdio.h>

int main(){
    int n, horas= 0, min= 0, seg= 0;
    scanf("%d", &n);
    horas = n / (60*60);
    min = (n% 3600) / 60;
    seg = (n% 3600) % 60;
    printf("%02d:%02d:%02d\n", horas, min, seg);
    return 0;
}