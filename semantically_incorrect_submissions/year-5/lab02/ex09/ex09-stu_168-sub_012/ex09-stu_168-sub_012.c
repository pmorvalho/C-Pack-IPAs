
#include <stdio.h>
#define LIMITE 60

int main(){
    int m=0,h=0,s;
    scanf("%d",&s);
    if (s>=LIMITE){
        m=s/LIMITE;
        s=s%LIMITE;
    }
    if (m>=LIMITE){
        h=m/60;
        m=m%60;
    }
    printf("%02d:%02d:%02d",h,m,s);
    return 0;
}