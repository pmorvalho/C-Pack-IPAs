
#include <stdio.h>

int main() {
    int n1,n2,n3,maior;
    scanf("%d%d%d",&n1,&n2,&n3);
    maior = n1;
    if (n2 > maior) maior = n2;
    if (n3 > maior) maior = n3;
    printf("%d\n",maior);
    return 0;
}