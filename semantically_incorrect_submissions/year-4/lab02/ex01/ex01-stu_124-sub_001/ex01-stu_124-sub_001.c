
#include <stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d %d %d", &a, &b, &c);
     
    if (a < b){
        d = b;
    }
    else{
        d = a;
    }
    if (d < c){
        d = c;
    }
    printf("%d", d);
    return 0;
}