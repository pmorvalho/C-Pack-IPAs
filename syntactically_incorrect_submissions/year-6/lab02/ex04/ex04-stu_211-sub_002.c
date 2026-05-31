
#include <stdio.h>
int main () {
    int a,b,c;
    if (a>b>c) {
        printf("%d%d%d",&a,&b,&c);
        return 0;
    }
    if else (a>c>b) {
        printf("%d%d%d",&a,&c,&b);
        return 0;
    }
    if else (b>a>c) {
        printf("%d%d%d",&b,&a,&c);
        return 0;
    }
    if else (b>c>a) {
        printf("%d%d%d",&b,&c,&a);
        return 0;
    }
    if else (c>b>a) {
        printf("%d%d%d",&c,&b,&a);
        return 0;
    }
    if else (c>a>b) {
        printf("%d%d%d",&c,&a,&b);
        return 0;
    }
}