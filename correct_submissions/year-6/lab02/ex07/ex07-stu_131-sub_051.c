
#include <stdio.h>

int main(){

    int i=1;
    int n;
    int m=1;

    if(scanf("%d",&n) != 1) return 2;

    for(; i<n; i++){
        if(n%i == 0) m += 1;
    }

    printf("%d\n", m);

    return 0;
}