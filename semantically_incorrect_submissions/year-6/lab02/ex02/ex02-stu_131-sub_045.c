
#include <stdio.h>

int main(){

    int n, m, maior, menor;

    scanf("%d",&n);
    scanf("%d",&m);
    if (n<m) {
        menor=n;
        maior=m;
    } else {
        menor=m;
        maior=n;
    }

    printf("%d\n%d",menor,maior);
    return 0;
}