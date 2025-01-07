
#include <stdio.h>

int main(){
    int a, b, max, min;

    scanf("%d %d", &a, &b);

    if (a < b){
        min = a;
        max = b;
    }
    else{
        min = b;
        max = a;
    }

    printf("%d\n%d\n", min, max);
    return 0;
}