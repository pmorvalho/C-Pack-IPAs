
#include <stdio.h>
int main(){
    int m,n;
    scanf("%d%d", &m, &n);
    if (m>n) {
        printf("%d\n",n);
        printf("%d\n",m);
    }
    else{
        printf("%d\n",m);
        printf("%d\n",n);
    }
    return 0;
}