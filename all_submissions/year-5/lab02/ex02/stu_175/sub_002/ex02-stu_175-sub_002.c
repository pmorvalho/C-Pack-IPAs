
#include <stdio.h>

int main (){
    int a, b = 0;
    scanf("%d %d", &a, &b);
    if (a > b){
        printf("%d\n%d", b, a);
    }
    else{
        printf("%d\n%d\n", a, b);
    }
    return 0;
}