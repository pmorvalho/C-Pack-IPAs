
#include <stdio.h>

int main(void) {
    int pri;
    int seg;
    int ter;
    scanf("%d",&pri);
    scanf("%d",&seg);
    scanf("%d",&ter);
    if( pri >= seg) {
        seg = pri;
    }
    else {
        pri = seg;
    }
    if( pri >= ter) {
        printf("%d\n",pri);
    }
    else {
        printf("%d\n",ter);
    }

    return 0;
}