

#include <stdio.h>

int main(){

    int n , h, m, s, resto;
    scanf("%d", &n);
    h = n / 3600;
    resto = n % 3600;
    m = resto / 60;
    resto = resto % 60;
    s = resto;
    printf("%02d:%02d:%02d\n", h, m, s);
    return 0;

}
