
#include <stdio.h>
int main (){
    int n,num;
    int astr;
    int max=0;
    int VECMAX[100];
    scanf("%d",&n);
    for(num=0;num<n;num++){
        scanf("%d",&VECMAX[num]);
        if (VECMAX[num]>max){
            max=VECMAX[num];
        }
    }
    for(num=0;num<max;num++){
        for(astr=0;astr<n;astr++){
            if (VECMAX[astr]>num){
                putchar('*');
            }
            else
                putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}