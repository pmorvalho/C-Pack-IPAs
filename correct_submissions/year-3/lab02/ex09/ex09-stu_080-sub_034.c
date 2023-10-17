
#include <stdio.h>
#define HS 3600
#define MS 60

int main(){
    int num;
    int horas, min;
    scanf("%d", &num);
    horas = num / HS;
    num = num % HS;
    min = num / MS;
    num = num % MS;
    printf("%02d:%02d:%02d\n", horas, min, num);
    return 0;
}