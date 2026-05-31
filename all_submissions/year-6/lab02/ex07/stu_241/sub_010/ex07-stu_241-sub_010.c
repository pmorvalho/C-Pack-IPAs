
#include <stdio.h>

int main() {
    int n,d;
    d=0;
    scanf("%d",&n);
    for (int i=1; i<n+1; i++){
        if(n%i==0)
            d++;
    };
    printf("%d\n",d);
    return 0;
}