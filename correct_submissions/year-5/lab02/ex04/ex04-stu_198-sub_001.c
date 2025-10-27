
#include <stdio.h>
int main(){
    int n1, n2, n3, extra;
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1 > n2){
        extra = n1;
        n1 = n2;
        n2 = extra;
    }
    if (n1 > n3){
        extra = n1;
        n1 = n3;
        n3 = extra;
    }
    if (n2 > n3){
        extra = n2;
        n2 = n3;
        n3 = extra;
    }
    printf("%d %d %d\n", n1, n2, n3);
    return 0;
}