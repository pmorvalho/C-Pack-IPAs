
#include <stdio.h>
int main (){
    int n,num;
    int astr;
    int VECMAX[100];
    scanf("%d",&n);
    for(num=0;num<n;num++){
        scanf("%d",&VECMAX[num]);
    }
    for(num=0;num<n;num++){
        for(astr=0;astr<VECMAX[num];astr++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}