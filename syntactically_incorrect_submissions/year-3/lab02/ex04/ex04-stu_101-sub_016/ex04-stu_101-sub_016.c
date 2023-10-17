

#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d\n%d\n%d\n", %a, %b, %c);
    if (a<b && a<c){
        if (b<c)
            printf("%d %d %d\n", a, b, c);
        else
            printf("%d %d %d\n", a, c, b);
    }
    if (a>b && a>c){
        if(b<c)
            printf("%d %d %d\n", b, c, a);
        else
            printf("%d %d %d\n", c, b, a);
    }
    if (a<b && a>c)
        printf("%d %d %d\n", c, a, b);
    if (a<c && a>b)
        printf("%d %d %d\n",b, a, c );
    return 0;
}
