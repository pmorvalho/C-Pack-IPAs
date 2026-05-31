
#include <stdio.h>
int main () {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a<b && b<c) {
        printf("%d %d %d\n",a,b,c);
        return 0;
    }
    else if (a<c && c<b) {
        printf("%d %d %d\n",a,c,b);
        return 0;
    }
    else if (b<a && a<c) {
        printf("%d %d %d\n",b,a,c);
        return 0;
    }
    else if (b<c && c<a) {
        printf("%d %d %d\n",b,c,a);
        return 0;
    }
    else if (c<b && b<a) {
        printf("%d %d %d\n",c,b,a);
        return 0;
    }
    else if (c<a && a<b) {
        printf("%d %d %d\n",c,a,b);
        return 0;
    }
}
     
  