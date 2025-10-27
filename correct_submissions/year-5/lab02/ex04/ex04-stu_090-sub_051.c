

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a<b && a<c){
        printf("%d ", a);
        if(b>c)
            printf("%d %d\n", c, b);
        else
            printf("%d %d\n", b, c);
    }
    else if (b<a && b<c){
        printf("%d ", b);
        if(a>c)
            printf("%d %d\n", c, a);
        else
            printf("%d %d\n", a, c);
    }
    else if (c<a && c<b){
        printf("%d ", c);
        if(a>b)
            printf("%d %d\n", b, a);
        else
            printf("%d %d\n", a, b);
    }
    
    else if (a==b && a>c)
        printf("%d %d %d\n", c, a, b);
    else if (a==b && a<c)
        printf("%d %d %d\n", a, b, c);
    else if (a==c && a>b)
        printf("%d %d %d\n", b, a, c);
    else if (a==c && a<b)
        printf("%d %d %d\n", a, c, b);
    else if (b==c && a<b)
        printf("%d %d %d\n", a, b, c);
    else if (b==c && a>b)
        printf("%d %d %d\n", b, c, a);
    else
        printf("%d %d %d\n", a, b,c);
    return 0;
}