#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Introduza 3 números inteiros\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>=b && a >= c){
        printf("%d\n",a);
    }

    if ( b >= a && b >= c){
        printf("%d\n",b);
    }

    if (c >= b && c >= a){
        printf("%d\n",c);
    }
    return 0;
}