#include <stdio.h>

int main()
{
    int a,b;
    printf("Introduza dois números inteiros\n");
    scanf("%d%d",&a,&b);
    if ( a >= b){
        printf("%d\n",b);
        printf("%d\n",a);
    }
    if ( b > a){
        printf("%d\n",a);
        printf("%d\n",b);
    }
    return 0;
}
