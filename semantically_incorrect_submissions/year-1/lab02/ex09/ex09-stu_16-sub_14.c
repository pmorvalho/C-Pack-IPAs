#include <stdio.h>

int main(){
    int n, h, m, s;
    scanf("%d", &n);


    h = n / (60 * 60);
    n = n - h*(60 * 60);

    m = n / 60;
    n = n - m*60;

    s = n;
    
    printf("%d:%d:%d", h, m ,s);

    return 0;
}