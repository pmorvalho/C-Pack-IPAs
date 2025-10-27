
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int horas = n / 3600;
    int min = (n % 3600) / 60;
    int seg = n % 60;    

    printf("%02d:%02d:%02d\n", horas, min, seg); 
    return 0;
}