
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    if(a<b){
        printf("%d\n%d\n", a,b);
        return 0;
    }
    printf("%d\n%d\n", b,a);
    return 0;
    
}