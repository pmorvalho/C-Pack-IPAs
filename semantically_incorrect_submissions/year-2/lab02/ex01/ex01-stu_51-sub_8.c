#include <stdio.h>

int main() {
    int n1, n2, n3, n4;
    printf("Insira tres numeros, separados por virgulas:");
    scanf("%d,%d,%d",&n1,&n2,&n3);
    if (n1>n2 && n1>n3)
        n4 = n1;
    else if(n2>n1 && n2>n3)
        n4 = n2;
    else n4 = n3;
    printf("%d",n4);
    return 0;
}
