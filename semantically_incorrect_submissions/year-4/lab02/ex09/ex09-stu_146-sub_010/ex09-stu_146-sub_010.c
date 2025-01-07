

#include <stdio.h>

int main(){

    int n, h = 0, min = 0, s = 0, res;

    scanf("%d", &n);

    if(n >= 3600){ 
        h = n / 3600; 
        res = n % 3600; 
        min = res / 60; 
        s = res % 60; 
        }
    else{ 
        min = n / 60;
        s = n % 60;
    }

    printf("%02d:%02d:%02d", h, min, s);
    return 0;
}