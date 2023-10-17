

#include <stdio.h>

int main(){
    int n,h,m,s;
    scanf("%d", &n);
    h = (n-n%3600)/3600;
    m = (n%3600-((n%3600)%60))/60;
    s = ((n%3600)%60);
    if(h<10 && m<10 && s<10){
        printf("0%d:0%d:0%d",h,m,s);
        return 0;
    }
    if(h<10 && m<10){
        printf("0%d:0%d:%d",h,m,s);
        return 0;
    }
    if(h<10 && s<10){
        printf("0%d:%d:0%d",h,m,s);
        return 0;
    }
    if(m<10 && s<10){
        printf("%d:0%d:0%d",h,m,s);
        return 0; 
    }
    if(h<10){
        printf("0%d:%d:%d",h,m,s);
        return 0;
    }
    if(m<10){
        printf("%d:0%d:%d",h,m,s);
        return 0;
    }
    if(s<10){
        printf("%d:%d:0%d",h,m,s);
        return 0;
    }
    return 0;
}
