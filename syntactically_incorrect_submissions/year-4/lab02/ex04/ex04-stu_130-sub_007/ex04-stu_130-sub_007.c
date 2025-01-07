
#include <stdio.h>

int main() {
    int q,w,e;

    scanf("%d", &q);
    scanf("%d", &w);
    scanf("%d", &e);

    if (q < w && q < e){
        if  (w < e)
            printf("%d %d %d\n",q,w,e);
        else
            printf("%d %d %d\n",q,e,w);
    } else if (w < e && w < q){
        if  (q < e)
            printf("%d %d %d\n",w,q,e);
        else
            printf("%d %d %d\n",w,e,q );
    } else {
        if  (q < w)
            printf("%d %d %d\n",e,q,w);
        else
            printf("%d %d %d\n",e,w,q);
    }    
}