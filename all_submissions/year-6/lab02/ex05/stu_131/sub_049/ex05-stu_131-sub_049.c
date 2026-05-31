
#include <stdio.h>

int main(){
    
    int i,n;

    if(scanf("%d", &i) != 1) return 2;

    for(n=1; n<i+1; n++) {
        printf("%d\n",n);
    }

    return 0;
}